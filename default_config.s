# default_config.s
# Copyright (C) 2021-2022 Timo Kokkonen <tjko@iki.fi>
#
# SPDX-License-Identifier: GPL-3.0-or-later
#
# This file is part of FanPico.
#

#
# Stub for embedding default_config.json in the executable.
#

	.global fanpico_default_config_start
	.global fanpico_default_config_end

	.section .rodata

	.p2align 2
fanpico_default_config_start:
	.incbin	"default_config.json"
	.byte	 0x00
fanpico_default_config_end:

# eof
