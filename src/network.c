/* network.c
   Copyright (C) 2022 Timo Kokkonen <tjko@iki.fi>

   SPDX-License-Identifier: GPL-3.0-or-later

   This file is part of FanPico.

   FanPico is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   FanPico is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with FanPico. If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <time.h>
#include <assert.h>
#include "hardware/rtc.h"
#include "pico/stdlib.h"
#include "pico/unique_id.h"
#include "pico/util/datetime.h"
#ifdef LIB_PICO_CYW43_ARCH
#include "pico/cyw43_arch.h"
#include "lwip/pbuf.h"
#include "lwip/tcp.h"
#include "lwip/apps/sntp.h"
#endif

#include "fanpico.h"


#ifdef WIFI_SUPPORT

static bool wifi_initialized = false;
static uint8_t cyw43_mac[6];
static char wifi_hostname[32];

void wifi_mac()
{
	int i;

	for (i = 0; i < 6; i++) {
		printf("%02x", cyw43_mac[i]);
		if (i < 5)
			printf(":");
	}
	printf("\n");
}

void wifi_init()
{
	uint32_t country_code = CYW43_COUNTRY_WORLDWIDE;
	struct netif *n = &cyw43_state.netif[CYW43_ITF_STA];
	pico_unique_board_id_t b;
	int res;

	memset(cyw43_mac, 0, sizeof(cyw43_mac));

	/* If WiFi country is defined in configuratio, use it... */
	if (cfg) {
		char *country = cfg->wifi_country;
		if (strlen(country) > 1) {
			uint rev = 0;
			if (country[2] >= '0' && country[2] <= '9') {
				rev = country[2] - '0';
			}
			country_code = CYW43_COUNTRY(country[0], country[1], rev);
			debug(2, "WiFi country code: %06x\n", country_code);
		}
	}

	if ((res = cyw43_arch_init_with_country(country_code))) {
		printf("WiFi initialization failed: %d\n", res);
		return;
	}

	cyw43_arch_enable_sta_mode();

	/* Set WiFi interface hostname... */
	pico_get_unique_board_id(&b);
	snprintf(wifi_hostname, sizeof(wifi_hostname),
		"FanPico-%02x%02x%02x%02x%02x%02x%02x%02x",
		b.id[0],b.id[1],b.id[2],b.id[3],
		b.id[4],b.id[5],b.id[6],b.id[7]);
	netif_set_hostname(n, wifi_hostname);
	netif_set_up(n);
	printf("WiFi hostname: %s\n", wifi_hostname);

	/* Get adapter MAC address */
	if ((res = cyw43_wifi_get_mac(&cyw43_state, CYW43_ITF_STA, cyw43_mac))) {
		printf("Cannot get WiFi MAC address: %d\n", res);
		cyw43_arch_deinit();
		return;
	}

	/* Display MAC address */
	printf("WiFi MAC: ");
	wifi_mac();

	/* Attempt to connect to a WiFi network... */
	if (cfg) {
		if (strlen(cfg->wifi_ssid) > 0 && strlen(cfg->wifi_passwd) > 0) {
			printf("WiFi connecting to network: %s\n", cfg->wifi_ssid);
			res = cyw43_arch_wifi_connect_async(cfg->wifi_ssid,
							cfg->wifi_passwd,
							CYW43_AUTH_WPA2_AES_PSK);
			if (res != 0) {
				printf("WiFi connect failed: %d\n", res);
				cyw43_arch_deinit();
				return;
			}
		}
	}

	wifi_initialized = true;

	/* Enable SNTP client (using NTP server from DHCP...) */
	sntp_init();
	sntp_servermode_dhcp(1);
}

void wifi_status()
{
	int res;

	if (!wifi_initialized) {
		printf("0\n");
		return;
	}

	res = cyw43_wifi_link_status(&cyw43_state, CYW43_ITF_STA);
	printf("%d\n", res);
}

void wifi_ip()
{
	if (!wifi_initialized) {
		printf("0.0.0.0\n");
		return;
	}

	printf("%s\n", ip4addr_ntoa(netif_ip4_addr(netif_list)));
}

void wifi_poll()
{
	if (!wifi_initialized)
		return;

	debug(3,"wifi_poll: start\n");
	cyw43_arch_poll();
	debug(3,"wifi_poll: end\n");
}

#endif /* WIFI_SUPPORT */


/****************************************************************************/


void set_pico_system_time(long unsigned int sec)
{
	datetime_t t;
	struct tm *ntp;
	time_t ntp_time = sec;

	if (!(ntp = gmtime(&ntp_time)))
		return;

	t.year = ntp->tm_year + 1900;
	t.month = ntp->tm_mon + 1;
	t.day = ntp->tm_mday;
	t.dotw = ntp->tm_wday;
	t.hour = ntp->tm_hour;
	t.min = ntp->tm_min;
	t.sec = ntp->tm_sec;

	rtc_set_datetime(&t);

	debug(1, "SNTP Set System time: %04d-%02d-%02d %02d:%02d:%02d UTC\n",
		t.year, t.month, t.day, t.hour, t.min, t.sec);
}

void network_init()
{
#ifdef WIFI_SUPPORT
	wifi_init();
#endif
}

void network_status()
{
#ifdef WIFI_SUPPORT
	wifi_status();
#endif
}


void network_poll()
{
#ifdef WIFI_SUPPORT
	wifi_poll();
#endif
}

void network_mac()
{
#ifdef WIFI_SUPPORT
	wifi_mac();
#endif
}

void network_ip()
{
#ifdef WIFI_SUPPORT
	wifi_ip();
#endif
}
