# Fanpico: Command Reference
Fanpico uses "SCPI like" command set. Command syntax should be mostly SCPI and IEE488.2 compliant,
to make it easier to control and configure Fanpico units.


## Command Set
Fanpico supports following commands:

* [*IDN?](#idn)
* [*RST](#rst)
* [CONFigure?](#configure)
* [CONFigure:SAVe](#configuresave)
* [CONFigure:Read?](#configureread)
* [CONFigure:DELete](#configuredelete)
* [CONFigure:FANx:NAME](#configurefanxname)
* [CONFigure:FANx:NAME?](#configurefanxname-1)
* [CONFigure:FANx:MINpwm](#configurefanxminpwm)
* [CONFigure:FANx:MINpwm?](#configurefanxminpwm-1)
* [CONFigure:FANx:MAXpwm](#configurefanxmaxpwm)
* [CONFigure:FANx:MAXpwm?](#configurefanxmaxpwm-1)
* [CONFigure:FANx:PWMCoeff](#configurefanxpwmcoeff)
* [CONFigure:FANx:PWMCoeff?](#configurefanxpwmcoeff-1)
* [CONFigure:FANx:RPMFactor](#configurefanxrpmfactor)
* [CONFigure:FANx:RPMFactor?](#configurefanxrpmfactor-1)
* [CONFigure:FANx:SOUrce](#configurefanxsource)
* [CONFigure:FANx:SOUrce?](#configurefanxsource-1)
* [CONFigure:FANx:PWMMap](#configurefanxpwmmap)
* [CONFigure:FANx:PWMMap?](#configurefanxpwmmap-1)
* [CONFigure:FANx:FILTER](#configurefanxfilter)
* [CONFigure:FANx:FILTER?](#configurefanxfilter-1)
* [CONFigure:MBFANx:NAME](#configurembfanxname)
* [CONFigure:MBFANx:NAME?](#configurembfanxname-1)
* [CONFigure:MBFANx:MINrpm](#configurembfanxminrpm)
* [CONFigure:MBFANx:MINrpm?](#configurembfanxminrpm-1)
* [CONFigure:MBFANx:MAXrpm](#configurembfanxmaxrpm)
* [CONFigure:MBFANx:MAXrpm?](#configurembfanxmaxrpm-1)
* [CONFigure:MBFANx:RPMCoeff](#configurembfanxrpmcoeff)
* [CONFigure:MBFANx:RPMCoeff?](#configurembfanxrpmcoeff-1)
* [CONFigure:MBFANx:RPMFactor](#configurembfanxrpmfactor)
* [CONFigure:MBFANx:RPMFactor?](#configurembfanxrpmfactor-1)
* [CONFigure:MBFANx:SOUrce](#configurembfanxsource)
* [CONFigure:MBFANx:SOUrce?](#configurembfanxsource-1)
* [CONFigure:MBFANx:RPMMap](#configurembfanxrpmmap)
* [CONFigure:MBFANx:RPMMap?](#configurembfanxrpmmap-1)
* [CONFigure:MBFANx:FILTER](#configurembfanxfilter)
* [CONFigure:MBFANx:FILTER?](#configurembfanxfilter-1)
* [CONFigure:SENSORx:NAME](#configuresensorxname)
* [CONFigure:SENSORx:NAME?](#configuresensorxname-1)
* [CONFigure:SENSORx:TEMPOffset](#configuresensorxtempoffset)
* [CONFigure:SENSORx:TEMPOffset?](#configuresensorxtempoffset-1)
* [CONFigure:SENSORx:TEMPCoeff](#configuresensorxtempcoeff)
* [CONFigure:SENSORx:TEMPCoeff?](#configuresensorxtempcoeff-1)
* [CONFigure:SENSORx:TEMPMap](#configuresensorxtempmap)
* [CONFigure:SENSORx:TEMPMap?](#configuresensorxtempmap-1)
* [CONFigure:SENSORx:BETAcoeff](#configuresensorxbetacoeff)
* [CONFigure:SENSORx:BETAcoeff?](#configuresensorxbetacoeff-1)
* [CONFigure:SENSORx:THERmistor](#configuresensorxthermistor)
* [CONFigure:SENSORx:THERmistor?](#configuresensorxthermistor-1)
* [CONFigure:SENSORx:TEMPNominal](#configuresensorxtempnominal)
* [CONFigure:SENSORx:TEMPNominal?](#configuresensorxtempnominal-1)
* [CONFigure:SENSORx:FILTER](#configuresensorxfilter)
* [CONFigure:SENSORx:FILTER?](#configuresensorxfilter-1)
* [CONFigure:VSENSORx:NAME](#configurevsensorxname)
* [CONFigure:VSENSORx:NAME?](#configurevsensorxname-1)
* [CONFigure:VSENSORx:SOUrce](#configurevsensorxsource)
* [CONFigure:VSENSORx:SOUrce?](#configurevsensorxsource-1)
* [CONFigure:VSENSORx:TEMPMap](#configurevsensorxtempmap)
* [CONFigure:VSENSORx:TEMPMap?](#configurevsensorxtempmap-1)
* [CONFigure:VSENSORx:FILTER](#configurevsensorxfilter)
* [CONFigure:VSENSORx:FILTER?](#configurevsensorxfilter-1)
* [MEASure:Read?](#measureread)
* [MEASure:FANx?](#measurefanx)
* [MEASure:FANx:Read?](#measurefanxread)
* [MEASure:FANx:RPM?](#measurefanxrpm)
* [MEASure:FANx:PWM?](#measurefanxpwm)
* [MEASure:FANx:TACho?](#measurefanxtacho)
* [MEASure:MBFANx?](#measurembfanx)
* [MEASure:MBFANx:Read?](#measurembfanxread)
* [MEASure:MBFANx:RPM?](#measurembfanxrpm)
* [MEASure:MBFANx:PWM?](#measurembfanxpwm)
* [MEASure:MBFANx:TACho?](#measurembfanxtacho)
* [MEASure:SENSORx?](#measuresensorx)
* [MEASure:SENSORx:Read?](#measuresensorxread)
* [MEASure:SENSORx:TEMP?](#measuresensorxtemp)
* [MEASure:VSENSORx?](#measurevsensorx)
* [MEASure:VSENSORx:Read?](#measurevsensorxread)
* [MEASure:VSENSORx:TEMP?](#measurevsensorxtemp)
* [Read?](#read)
* [SYStem:ERRor?](#systemerror)
* [SYStem:DEBug](#systemdebug)
* [SYStem:DEBug?](#systemdebug-1)
* [SYStem:LOG](#systemlog)
* [SYStem:LOG?](#systemlog-1)
* [SYStem:SYSLOG](#systemsyslog)
* [SYStem:SYSLOG?](#systemsyslog-1)
* [SYStem:DISPlay](#systemdisplay)
* [SYStem:DISPlay?](#systemdisplay)
* [SYStem:DISPlay:LAYOUTR](#systemdisplaylayoutr)
* [SYStem:DISPlay:LAYOUTR?](#systemdisplaylayoutr-1)
* [SYStem:DISPlay:LOGO](#systemdisplaylogo)
* [SYStem:DISPlay:LOGO?](#systemdisplaylogo-1)
* [SYStem:DISPlay:THEMe](#systemdisplaytheme)
* [SYStem:DISPlay:THEMe?](#systemdisplaytheme-1)
* [SYStem:ECHO](#systemecho)
* [SYStem:ECHO?](#systemecho)
* [SYStem:FANS?](#systemfans)
* [SYStem:LED](#systemled)
* [SYStem:LED?](#systemled-1)
* [SYStem:MBFANS?](#systemmbfans)
* [SYStem:NAME](#systemname)
* [SYStem:NAME?](#systemname-1)
* [SYStem:SENSORS?](#systemsensors)
* [SYStem:SERIAL](#systemserial)
* [SYStem:SERIAL?](#systemserial-1)
* [SYStem:SPI](#systemspi)
* [SYStem:SPI?](#systemspi-1)
* [SYStem:TIME](#systemtime)
* [SYStem:TIME?](#systemtime-1)
* [SYStem:TIMEZONE](#systemtimezone)
* [SYStem:TIMEZONE?](#systemtimezone-1)
* [SYStem:UPTIme?](#systemuptime)
* [SYStem:UPGRADE](#systemupgrade)
* [SYStem:VERsion?](#systemversion)
* [SYStem:VSENSORS?](#systemvsensors)
* [SYStem:WIFI?](#systemwifi)
* [SYStem:WIFI:COUntry](#systemwificountry)
* [SYStem:WIFI:COUntry?](#systemwificountry-1)
* [SYStem:WIFI:HOSTname](#systemwifihostname)
* [SYStem:WIFI:HOSTname?](#systemwifihostname-1)
* [SYStem:WIFI:IPaddress](#systemwifiipaddress)
* [SYStem:WIFI:IPaddress?](#systemwifiipaddress-1)
* [SYStem:WIFI:MODE](#systemwifimode)
* [SYStem:WIFI:MODE?](#systemwifimode-1)
* [SYStem:WIFI:NETMASK](#systemwifinetmask)
* [SYStem:WIFI:NETMASK?](#systemwifinetmask-1)
* [SYStem:WIFI:GATEWAY](#systemwifigateway)
* [SYStem:WIFI:GATEWAY?](#systemwifigateway-1)
* [SYStem:WIFI:NTP](#systemwifintp)
* [SYStem:WIFI:NTP?](#systemwifintp-1)
* [SYStem:WIFI:SYSLOG](#systemwifisyslog)
* [SYStem:WIFI:SYSLOG?](#systemwifisyslog-1)
* [SYStem:WIFI:MAC?](#systemwifimac)
* [SYStem:WIFI:SSID](#systemwifissid)
* [SYStem:WIFI:SSID?](#systemwifissid-1)
* [SYStem:WIFI:STATus?](#systemwifistatus)
* [SYStem:WIFI:STATS?](#systemwifistats)
* [SYStem:WIFI:PASSword](#systemwifipassword)
* [SYStem:WIFI:PASSword?](#systemwifipassword-1)
* [WRIte:VSENSORx](#writevsensorx)


Additionally unit will respond to following standard SCPI commands to provide compatibility in case some program
unconditionally will send these:
* *CLS
* *ESE
* *ESE?
* *ESR?
* *OPC
* *OPC?
* *SRE
* *SRE?
* *STB?
* *TST?
* *WAI


### Common Commands

#### *IDN?
Identify device. This returns string that contains following fields:
```
<manufacturer>,<model number>,<serial number>,<firmware version>
```

Example:
```
*IDN?
TJKO Industries,FANPICO-0804,e660c0d1c768a330,1.0
```

#### *RST
  Reset unit. This triggers Fanpico to perform (warm) reboot.

  ```
  *RST
  ```

### CONFigure:
Commands for configuring the device settings.

#### CONFigure?
  Display current configuration in JSON format.
  Same as CONFigure:Read?

  Example:
  ```
  CONF?
  ```

#### CONFigure:SAVe
Save current configuration into flash memory.

Example:
```
CONF:SAVE
```

#### CONFigure:Read?
Display current configuration in JSON format.

Example:
```
CONF:READ?
```

#### CONFigure:DELete
Delete current configuration saved into flash. After unit has been reset it will be using default configuration.

Example:
```
CONF:DEL
*RST
```

### CONFigure:FANx Commands
FANx commands are used to configure specific fan output port.
Where x is a number from 1 to 8.

For example:
```
CONFIGURE:FAN8:NAME Exhaust Fan 2
```

#### CONFigure:FANx:NAME
Set name for fan (output) port.

For example:
```
CONF:FAN1:NAME CPU Fan 1
```

#### CONFigure:FANx:NAME?
Query name of a fan (output) port.

For example:
```
CONF:FAN1:NAME?
CPU Fan 1
```

#### CONFigure:FANx:MINpwm
Set absolute minimum PWM duty cycle (%) for given fan port.
This can be used to make sure that fan always sees a minimum
duty cycle (overriding the normal fan signal).

Default: 0 %

Example: Set minimum PWM duty cycle to 20% for FAN1
```
CONF:FAN1:MIN 20
```

#### CONFigure:FANx:MINpwm?
Query current minimum PWM duty cycle (%) configured on a fan port.

Example:
```
CONF:FAN1:MIN?
20
```

#### CONFigure:FANx:MAXpwm
Set absolute maximum PWM duty cycle (%) for given fan port.
This can be used to make sure that fan never sees higher duty cycle
than given value (overriding the normal fan signal).

Default: 100 %

Example: Set maximum PWM duty cycle to 95% for FAN1
```
CONF:FAN1:MAX 95
```

#### CONFigure:FANx:MAXpwm?
Query current maximum PWM duty cycle (%) configured on a fan port.

Example:
```
CONF:FAN1:MAX?
95
```

#### CONFigure:FANx:PWMCoeff
Set scaling factor for the fan PWM (output) signal.
This is applied to the PWM duty cycle before MAXpwm and MINpwm limits are applied.

Default: 1.0

Example: Set FAN6 to run 20% slower than signal its configured to follow.
```
CONF:FAN6:PWMC 0.8
```

#### CONFigure:FANx:PWMCoeff?
Query current PWM duty cycle (%) scaling factor configured on a fan port.

Example:
```
CONF:FAN6:PWMC?
0.8
```

#### CONFigure:FANx:RPMFactor
Set number of pulses fan generates per one revolution.
This is used to calculate RPM measurement based on the Tachometer
signal from the fan.

PC Fans typically send 2 pulses per revolution (per Intel specifications).

Default: 2

Example: Adjust factor for a fan that produces 4 pulses per revolution
```
CONF:FAN1:RPMF 4
```

#### CONFigure:FANx:RPMFactor?
Query current RPM conversion factor configured on a fan port.

Example:
```
CONF:FAN1:RPMF?
4
```

#### CONFigure:FANx:SOUrce
Configure source for the PWM signal of a fan.

Source types:
* MBFAN (set fan to follow duty cycle from motherboard fan port)
* SENSOR (set fan to follow temperature based duty cycle)
* FAN (set fan to follow another FAN output duty cycle)
* FIXED (set fan to run on fixed duty cycle)


Defaults:
FAN|SOURCE
---|------
1|MBFAN,1
2|MBFAN,2
3|MBFAN,3
4|MBFAN,4
5|MBFAN,1
6|MBFAN,2
7|MBFAN,3
8|MBFAN,4

Example: Set FAN 5 to follow temperature sensor 2
```
CONF:FAN5:SOURCE SENSOR,2
```

Example: Set FAN 6 to run always at fixed 50% duty cycle (speed)
```
CONF:FAN6:SOURCE FIXED,50
```

#### CONFigure:FANx:SOUrce?
Query current signal source for a fan.

Command returns response in following format:
```
source_type,source_no
```

Example:
```
CONF:FAN1:SOU?
mbfan,1
```

#### CONFigure:FANx:PWMMap
Set mapping (curve) for the PWM duty cycle signal.
This can be used to customize how fan will respond to input signal it receives.

Mapping is specified with up to 32 points (that can be plotted as a curve)
that map the relation of the input signal (x value) to output signal (y value).
Mapping should at minimum include that start and end points of the expected input signal
(typically 0 and 100).

Default mapping is linear (1:1) mapping:
x|y
-|-
0|0
100|100

Example: Configure Fan to run at 20% duty cycle between 0-20% input signal then scale
linearly to 100% by the time input signal reaches 100%
```
CONF:FAN1:PWMMAP 0,20,20,20,100,100
```

Example: Assuming we have "fancy" PWM fan that actually stops spinning on 0% duty cycle.
And we want fan not run until input PWM signal duty cycle is over 30%, and we want fan to reach
full speed by the time 90% duty signal is received.
```
CONF:FAN1:PWMMAP 0,0,30,0,90,100
```

#### CONFigure:FANx:PWMMap?
Display currently active mapping (curve) for the PWM duty signal.

Mapping is displayed as comma separated list of values:
```
x_1,y_1,x_2,y_2,...,x_n,y_n
```

For example:
```
CONF:FAN1:PWMMAP?
0,0,100,100
```


#### CONFigure:FANx:FILTER
Configure filter to be applied for the PWM signal controlling the fan.

Filter|Description|Arguments|Argument Descriptions|Example|Notes
------|-----------|---------|---------------------|-------|-------
none|No Filter|||
lossypeak|Lossy Peak Detector|decay_rate,decay_start_delay|* decay rate [points per second] (valid values: > 0.0)<br>* decay start delay [seconds] (valid values: >= 0.0)|CONF:FAN1:FILTER lossypeak,1.5,15|This can be useful for smoothing out erratic (CPU Fan) PWM signal from motherboard.
sma|Simple Moving Average|window_size|* window size [points] (valid range: 2..32)<br>|CONF:FAN1:FILTER sma,10|This can be useful for filtering temperature sensor signal.

For example:
```
CONF:FAN1:FILTER lossypeak,1.0,30
```


#### CONFigure:FANx:FILTER?
Display currently active (PWM) filter for the fan.

Format: filter,arg_1,arg_2,...arg_n


For example:
```
CONF:FAN1:FILTER?
lossypeak,1.0,30.0
```

### CONFigure:MBFANx Commands
MBFANx commands are used to configure specific motherboard fan input port.
Where x is a number from 1 to 4.

For example:
```
CONF:MBFAN4:NAME Water Pump
```

#### CONFigure:MBFANx:NAME
Set name for motherboard fan (input) port.

For example:
```
CONF:MBFAN1:NAME CPU Fan
```

#### CONFigure:MBFANx:NAME?
Query name of a motherboard fan (input) port.

For example:
```
CONF:MBFAN1:NAME?
CPU Fan
```

#### CONFigure:MBFANx:MINrpm
Set absolute minimum RPM value for given motherboard fan port.
This can be used to make sure motherboard never sees "fan"
running slower than this value (even if fan is not running at all).

Default: 0

Example: Set minimum RPM (sent to motheboard) to be at least 500
```
CONF:MBFAN1:MIN 500
```

#### CONFigure:MBFANx:MINrpm?
Query current minimum RPM value configured on a motherboard fan port.

Example:
```
CONF:MBFAN1:MIN?
500
```

#### CONFigure:MBFANx:MAXrpm
Set absolute maximum value for given motherboard fan port.
This can be used to make sure motherboard never sees "fan"
running ffaster than this value.

Default: 10000

Example: Set maximum RPM value motheboard can see to 3000
```
CONF:MBFAN1:MAX 3000
```

#### CONFigure:MBFANx:MAXrpm?
Query current maximum RPM value configured on a motherboard fan port.

Example:
```
CONF:MBFAN1:MAX?
3000
```

#### CONFigure:MBFANx:RPMCoeff
Set scaling factor for the motherboard fan Tachometer (output) signal.
This is applied to adjust the output RPM (and tachometer signal frequency).

Default: 1.0

Example: Scale the MBFAN4 port Tachometer (RPM) values to be 20% higher than input.
```
CONF:MBFAN4:RPMC 1.2
```

#### CONFigure:MBFANx:RPMCoeff?
Query current TAchometer (RPM) scaling factor configured on a motherboard fan port.

Example:
```
CONF:MBFAN6:RPMC?
1.2
```

#### CONFigure:MBFANx:RPMFactor
Set number of pulses per one revolution in the generated tachometer signal (going out to motherboard).
This is mainly only needed if using Fanpico with something else than PC motherboard, that expects
to see tachometer signal from Fans that produce other than the default 2 pulses per revolution.

Default: 2

Example: Adjust factor for (emulating fan that produces 4 pulses per revolution
```
CONF:MBFAN1:RPMF 4
```

#### CONFigure:MBFANx:RPMFactor?
Query current RPM conversion factor configured on a motherboard fan port.

Example:
```
CONF:MBFAN1:RPMF?
4
```

#### CONFigure:MBFANx:SOUrce
Configure source for the Tachometer (RPM) signal for a motheboard fan (output) port.

Source types:

Type|Parameters|Description|Example
----|----------|-----------|------
FAN|n|Return tachometer signal of a specified fan|FAN,1
FIXED|rpm|Return static tachometer signal at specified rpm|FIXED,1500
MIN|n1,n2,...|Return slowest FAN speed acros specified fans|MIN,2,7,8
MAX|n1,n2,...|Return fastest FAN speed acros specified fans|MAX,2,7,8
AVG|n1,n2,...|Return average FAN speed acros specified fans|AVG,2,7,8

Defaults:
MBFAN|SOURCE
---|------
1|FAN,1
2|FAN,2
3|FAN,3
4|FAN,4

Example: Set MBFAN 2 to follow Tachometer signal from FAN8
```
CONF:MBFAN2:SOURCE FAN,8
```

Example: Set MBFAN 4 to see fixed 1500 RPM tachometer signal
```
CONF:MBFAN4:SOURCE FIXED,1500
```

Example: Set MBFAN 1 to return slowest fan speed from FAN1, FAN2, and FAN3
```
CONF:MBFAN1:SOURCE MIN,1,2,3
```

#### CONFigure:MBFANx:SOUrce?
Query current signal source for a motherboar fan (Tachometer output).

Command returns response in following format:
```
source_type,source_no
```

Example:
```
CONF:MBFAN1:SOU?
fan,1
```

#### CONFigure:MBFANx:RPMMap
Set mapping (curve) for the Tachometer (RPM) output signal to motherboard.
This can be used to customize what motherboard sees as the "fan" RPM.

Mapping is specified with up to 32 points (that can be plotted as a curve)
that map the relation of the input signal (x value) to output signal (y value).
Mapping should at minimum include that start and end points of the expected input signal
(typically 0 and 100).

Default mapping is linear (1:1) mapping:
x|y
-|-
0|0
10000|10000

Example: Assuming we have configured FAN1 to only run above 30% PWM signal, but our
motherboard sets alarm when it doesn't detect fan running, we can provide 'fake' 500RPM
speed to the motherboard until fan is actually running at least 500 RPM...
```
CONF:MBFAN1:RPMMAP 0,500,500,500,10000,10000
```

#### CONFigure:MBFANx:RPMMap?
Display currently active mapping (curve) for the tachometer signal sent to motherboard
fan port.

Mapping is displayed as comma separated list of values:
```
x_1,y_1,x_2,y_2,...,x_n,y_n
```

For example:
```
CONF:MBFAN1:RPMMAP?
0,0,10000,10000
```

#### CONFigure:MBFANx:FILTER
Configure filter to be applied to the PWM signal received (from motheboard, etc.)

List of available filters can be found here: [Available Filters](#configurefanfilter)

By default, no filter is applied (filter is set to "none").


Example: Set filter for the input signal to "Lossy Peak Detector", that is often useful
with erratic PWM signals (like CPU Fan control signal on many motherboards).

```
CONF:MBFAN1:FILTER lossypeak,1.5,10
```

#### CONFigure:MBFANx:FILTER?
Display currently active filter for the input PWM signal.

Format: filter,arg_1,arg_2,...arg_n


For example:
```
CONF:MBFAN1:FILTER?
none,
```


### CONFigure:SENSORx Commands
SENSORx commands are used to configure specific (temperature) sensor.
Where x is a number from 1 to 3.

Sensor|Description
------|-----------
1|Thermistor connected to SENSOR1 connector.
2|Thermistor connected to SENSOR2 connector.
3|Internal temperature sensor on RP2040 (can be used for "Ambient" temperature measurementes as RP2040 doesn't heat up significantly).

For example:
```
CONF:SENSOR1:NAME Air Intake
```

#### CONFigure:SENSORx:NAME
Set name for temperature sensor.

For example:
```
CONF:SENSOR1:NAME Air Intake
```

#### CONFigure:SENSORx:NAME?
Query name of a temperature sensor.

For example:
```
CONF:SENSOR1:NAME?
Air Intake
```

#### CONFigure:SENSORx:TEMPOffset
Set offset that is applied to measured temperature.
This can be used as a grude calibration method by setting offset to
the difference of actual temperature vs. what sensor is reporting.

Default: 0.0

For example: Sensor is reporting 2.5 degrees "high", so set offset to -2.5:
```
CONF:SENSOR1:TEMPO -2.5
```

#### CONFigure:SENSORx:TEMPOffset?
Get the current temperature offset configured for the sensor.

For example:
```
CONF:SENSOR1:TEMPO?
-2.5
```

#### CONFigure:SENSORx:TEMPCoeff
Set coefficient that is used to multiply the (raw) temperature sensor reports.
This can be used to correct error in temperature measurements.

Default: 1.0

For example: Sensor is consistently reading 10% higher than actual temperature
```
CONF:SENSOR1:TEMPC 0.9
```

#### CONFigure:SENSORx:TEMPCoeff?
Get the current temperature coefficient configured for the sensor.

For example:
```
CONF:SENSOR1:TEMPC?
0.9
```

#### CONFigure:SENSORx:TEMPMap
Set mapping (curve) for converting temperature to PWM signal duty cycle (%).
This can be used to customize how temperature affects fan speed.

Mapping is specified with up to 32 points (that can be plotted as a curve)
that map the relation of the temperature (x value) to output PWM signal (y value).
Mapping should at minimum include that start and end points of the expected input signal.


Default mapping:
x (Temperature in C)|y (Fan Duty Cycle in %)
-|-
20|0
50|100

Example: Set Fan to start running at 20% duty cycle at 25C and to be full speed at 50C
```
CONF:SENSOR1:TEMPMAP 25,20,50,100
```

#### CONFigure:SENSORx:TEMPMap?
Display currently active mapping (curve) for convertin measured temperature
to PWM duty cycle (%) for the fan output signal.

Mapping is displayed as comma separated list of values:
```
x_1,y_1,x_2,y_2,...,x_n,y_n
```

For example:
```
CONF:SENSOR1:TEMPMAP?
20,0,50,10000
```

#### CONFigure:SENSORx:BETAcoeff
Set beta coefficient of thermistor used to measure temperature.
Typically thermistor beta coefficient is in the range 3000-4000.

Default: 3950

For example:
```
CONF:SENSOR1:BETA 3950
```

#### CONFigure:SENSORx:BETAcoeff?
Get the configured beta coefficient of the thermistor used to measure temperature.

For example:
```
CONF:SENSOR1:BETA?
3950
```

#### CONFigure:SENSORx:THERmistor
Set thermistor nominal resistance at nominal (room) temperature.
Typically this is either 10000 (for 10k thermistors) or 100000 (for 100k thermistors).

Default: 10000

For example: configure 100k thermistor
```
CONF:SENSOR1:THER 100000
```

#### CONFigure:SENSORx:THERmistor?
Get the thermistor nominal resistance at nominal (room) temperature.

For example:
```
CONF:SENSOR1:THER?
100000
```

#### CONFigure:SENSORx:TEMPNominal
Set nominal temperature of the thermistor (in C).
Typically nominal temperature is around room temperature.

Default: 25.0

For example:
```
CONF:SENSOR1:TEMPN 25.0
```

#### CONFigure:SENSORx:TEMPNominal?
Get nominal temperature of the thermistor (in C).

For example:
```
CONF:SENSOR1:TEMPN?
25.0
```

#### CONFigure:SENSORx:FILTER
Configure filter to be applied to the temperature signal received from the sensor.

List of available filters can be found here: [Available Filters](#configurefanfilter)

By default, no filter is applied (filter is set to "none").


Example: Set filter for the input signal to "Simple Moving Average", that can
be useful with noisy readings from temperature sensors.

```
CONF:SENSOR1:FILTER sma,10
```

#### CONFigure:SENSORx:FILTER?
Display currently active filter for the temperature signal received from the sensor.

Format: filter,arg_1,arg_2,...arg_n


For example:
```
CONF:SENSOR1:FILTER?
sma,10
```


### CONFigure:VSENSORx Commands
VSENSORx commands are used to configure virtual temperature sensors.
These can be "sensors" that are updated by software, like "CPU Temperature" of host system.
Or these can be be virtual sensors that report value of multiple physical sensors fed through a mathematical formula.


Where x is a number from 1 to 3.

Virtual Sensor Mode|Description
------|-----------
manual|Manually updated (by software) sensor values. For example host CPU Temperature.
max|Maximum temperature of configured source sensors.
min|Minimum temperature of configured source sensors.
avg|Average temperature of configured source sensors.
delta|Temperature delta between readings from two source sensors.


#### CONFigure:VSENSORx:NAME
Set name for virtual temperature sensor.

For example:
```
CONF:VSENSOR1:NAME CPU Temperature
```

#### CONFigure:VSENSORx:NAME?
Query name of a virtual temperature sensor.

For example:
```
CONF:VSENSOR1:NAME?
CPU Temperature
```

#### CONFigure:VSENSORx:SOUrce
Configure source for the virtual temperature sensor.

Source types:

MODE|Description|No of Parameters|Parameters
----|-----------|----------------|----------
MANUAL|Temperature updated by external program/driver|2|default_temperature_C,timeout
MAX|Maximum temperatore between source sensors|2+|sensor_a, sensor_b, ...
MIN|Minimum temperature between source sensors|2+|sensor_a, sensor_b, ...
AVG|Average temperature between source sensors|2+|sensor_a, sensor_b, ...
DELTA|Temperature delta between to source sensors|2|sensor_a, sensor_b


Note, in "manual" mode if timeout_ms is set to zero, then sensor's temperature reading
will never revert back to default value (if no updates are being received).


Defaults:

Default for all virtual sensors is to be in "MANUAL" mode and revert automatically to 0C
if no temperature update has been received within 30 seconds.

VSENSOR|SOURCE
---|------
1|MANUAL,0,30
...|...


Example: Set VSENSOR1 to report temperature that is updated by external program. And to sensor reading to revert to default value of 99C if no update has been received within 5 seconds.
```
CONF:VSENSOR2:SOURCE manual,99,5
```

Example: Set VSENSOR2 to follow report temperature delta between SENSOR1 and  SENSOR2.
```
CONF:VSENSOR2:SOURCE delta,1,2
```

Example: Set VSENSOR3 to report average temperature between SENSOR1 through SENSOR3.
```
CONF:VSENSOR3:SOURCE avg,1,2,3
```

#### CONFigure:VSENSORx:SOUrce?
Query a virtual temperature sensor configuration (temperature reading source).


Command returns response in following format:
```
mode,parameter,parameter,...
```

Example:
```
CONF:VSENSOR1:SOU?
manual,99.0,5
```

#### CONFigure:VSENSORx:TEMPMap
Set mapping (curve) for converting temperature to PWM signal duty cycle (%).
This can be used to customize how temperature affects fan speed.

Mapping is specified with up to 32 points (that can be plotted as a curve)
that map the relation of the temperature (x value) to output PWM signal (y value).
Mapping should at minimum include that start and end points of the expected input signal.


Default mapping:
x (Temperature in C)|y (Fan Duty Cycle in %)
-|-
20|0
50|100

Example: Set Fan to start running at 20% duty cycle at 25C and to be full speed at 50C
```
CONF:VSENSOR1:TEMPMAP 25,20,50,100
```

#### CONFigure:VSENSORx:TEMPMap?
Display currently active mapping (curve) for convertin measured temperature
to PWM duty cycle (%) for the fan output signal.

Mapping is displayed as comma separated list of values:
```
x_1,y_1,x_2,y_2,...,x_n,y_n
```

For example:
```
CONF:VSENSOR1:TEMPMAP?
20,0,50,10000
```

#### CONFigure:VSENSORx:FILTER
Configure filter to be applied to the temperature signal received from the sensor.

List of available filters can be found here: [Available Filters](#configurefanfilter)

By default, no filter is applied (filter is set to "none").


Example: Set filter for the input signal to "Simple Moving Average", that can
be useful with noisy readings from temperature sensors.

```
CONF:VSENSOR1:FILTER sma,10
```

#### CONFigure:VSENSORx:FILTER?
Display currently active filter for the temperature signal received from the sensor.

Format: filter,arg_1,arg_2,...arg_n


For example:
```
CONF:VENSOR1:FILTER?
sma,10
```



### MEASure Commands
These commands are for reading (measuring) the current input/output values on Fan and Motherboard Fan ports.

#### MEASure:Read?
This command returns all measurements for all FAN and MBFAN, and SENSOR ports.
(This is same as: Read?)

Response format:
```
mbfan<n>,"<name>",<output rpm>,<output tacho frequency>,<input pwm duty cycle>
...
fan<n>,"<name>",<input rpm>,<input tacho frequency>,<output pwm duty cycle>
...
sensor<n>,"<name>",<temperature>,<pwm duty cycle>
...
vsensor<n>,"<name>",<temperature>,<pwm duty cycle>
```

Example:
```
MEAS:READ?
mbfan1,"CPU Fan",1020,34.00,63.0
mbfan2,"Chassis Fan 1",468,15.60,63.0
mbfan3,"Chassis Fan 2",534,17.80,63.0
mbfan4,"Chassis Fan 3",417,13.90,63.0
fan1,"CPU Fan",1020,34.00,63.0
fan2,"Rear Exhaust",468,15.60,31.5
fan3,"unused",0,0.00,20.0
fan4,"unused",0,0.00,20.0
fan5,"Front Intake 1",534,17.80,35.0
fan6,"Front Intake 2",420,14.00,35.0
fan7,"Top Exhaust 1",417,13.90,22.8
fan8,"Top Exhaust 2",462,15.40,22.8
sensor1,"Intake Air",22.4,7.9
sensor2,"Exhaust Air",30.5,35.0
sensor3,"RPi Pico",26.5,21.8
vsensor1,"CPU Temp",55.0,60.5
vsensor2,"unused",0.0,20.0
vsensor3,"unused",0.0,20.0
vsensor4,"unused",0.0,20.0
vsensor5,"unused",0.0,20.0
vsensor6,"unused",0.0,20.0
vsensor7,"unused",0.0,20.0
vsensor8,"unused",0.0,20.0
```

### MEASure:FANx Commands

#### MEASure:FANx?
Return current fan speed (RPM), tacho meter frequency (Hz), and output PWM signal duty cycle (%) for a fan.

Response format:
```
<duty_cycle>,<frequency>,<rpm>
```

Example:
```
MEAS:FAN1?
42,34.4,1032
```

#### MEASure:FANx:Read?
Return current fan speed (RPM), tacho meter frequency (Hz), and output PWM signal duty cycle (%) for a fan.

This is same as: MEASure:FANx?

Response format:
```
<duty_cycle>,<frequency>,<rpm>
```

Example:
```
MEAS:FAN1:R?
42,34.4,1032
```

#### MEASure:FANx:RPM?
Return current fan speed (RPM).

Example:
```
MEAS:FAN1:RPM?
1032
```

#### MEASure:FANx:PWM?
Return current fan (output) PWM signal duty cycle (%).

Example:
```
MEAS:FAN1:PWM?
42
```

#### MEASure:FANx:TACHo?
Return current fan tachometer (speed) signal frequency (Hz).

Example:
```
MEAS:FAN1:TACH?
34.4
```

### MEASure:MBFANx Commands

#### MEASure:MBFANx?
Return current motherboard fan connector signals. Output fan speed speed (RPM), output tacho meter frequency (Hz), and input PWM signal duty cycle (%) for a mbfan.

Response format:
```
<duty_cycle>,<frequency>,<rpm>
```

Example:
```
MEAS:MBFAN1?
49,34.4,1032
```

#### MEASure:MBFANx:Read?
Return current fan speed (RPM), tacho meter frequency (Hz), and output PWM signal duty cycle (%) for a fan.

This is same as: MEASure:MBFANx?

Response format:
```
<duty_cycle>,<frequency>,<rpm>
```

Example:
```
MEAS:MBFAN1:R?
49,34.4,1032
```

#### MEASure:MBFANx:RPM?
Return current fan speed (RPM) reported out to motherboard.

Example:
```
MEAS:MBFAN1:RPM?
1032
```

#### MEASure:MBFANx:PWM?
Return current fan (input) PWM signal duty cycle (%) received from motherboard.

Example:
```
MEAS:MBFAN1:PWM?
49
```

#### MEASure:MBFANx:TACHo?
Return current fan tachometer (speed) signal frequency (Hz) reported out to motherboard.

Example:
```
MEAS:MBFAN1:TACH?
34.4
```

### MEASure:SENSORx Commands

#### MEASure:SENSORx?
Return current temperature (C) measured by the sensor.

Example:
```
MEAS:SENSOR1?
25
```

#### MEASure:SENSORx:Read?
Return current temperature (C) measured by the sensor.

This is same as: MEASure:SENSORx?

Example:
```
MEAS:SENSOR1:R?
25
```

#### MEASure:SENSORx:TEMP?
Return current temperature (C) measured by the sensor.

This is same as: MEASure:SENSORx?

Example:
```
MEAS:SENSOR1:TEMP?
25
```

#### MEASure:VENSORx?
Return current temperature (C) measured by the sensor.

Example:
```
MEAS:VSENSOR1?
25
```

#### MEASure:VSENSORx:Read?
Return current temperature (C) measured by the sensor.

This is same as: MEASure:VSENSORx?

Example:
```
MEAS:VSENSOR1:R?
25
```

#### MEASure:VSENSORx:TEMP?
Return current temperature (C) measured by the sensor.

This is same as: MEASure:VSENSORx?

Example:
```
MEAS:VSENSOR1:TEMP?
25
```


### Read Commands

#### Read?
This command returns all measurements for all FAN and MBFAN, and SENSOR ports.
(This is same as: MEASure:Read?)

Response format:
```
mbfan<n>,"<name>",<output rpm>,<output tacho frequency>,<input pwm duty cycle>
...
fan<n>,"<name>",<input rpm>,<input tacho frequency>,<output pwm duty cycle>
...
sensor<n>,"<name>",<temperature>,<pwm duty cycle>
...
vsensor<n>,"<name>",<temperature>,<pwm duty cycle>
```

Example:
```
mbfan1,"CPU Fan",1020,34.00,63.0
mbfan2,"Chassis Fan 1",468,15.60,63.0
mbfan3,"Chassis Fan 2",534,17.80,63.0
mbfan4,"Chassis Fan 3",417,13.90,63.0
fan1,"CPU Fan",1020,34.00,63.0
fan2,"Rear Exhaust",468,15.60,31.5
fan3,"unused",0,0.00,20.0
fan4,"unused",0,0.00,20.0
fan5,"Front Intake 1",534,17.80,35.0
fan6,"Front Intake 2",420,14.00,35.0
fan7,"Top Exhaust 1",417,13.90,22.8
fan8,"Top Exhaust 2",462,15.40,22.8
sensor1,"Intake Air",22.4,7.9
sensor2,"Exhaust Air",30.5,35.0
sensor3,"RPi Pico",26.5,21.8
vsensor1,"CPU Temp",55.0,60.5
vsensor2,"unused",0.0,20.0
vsensor3,"unused",0.0,20.0
vsensor4,"unused",0.0,20.0
vsensor5,"unused",0.0,20.0
vsensor6,"unused",0.0,20.0
vsensor7,"unused",0.0,20.0
vsensor8,"unused",0.0,20.0
```


### SYStem Commands


#### SYStem:ERRor?
Display status from last command.

Example:
```
SYS:ERR?
0,"No Error"
```

#### SYStem:DEBug
Set the system debug level. This controls the logging to the console.

Default: 0   (do not log any debug messages)

Example: Enable verbose debug output
```
SYS:DEBUG 2
```

#### SYStem:DEBug?
Display current system debug level.

Example:
```
SYS:DEBUG?
0
```

#### SYStem:LOG
Set the system logging level. This controls the level of logging to the console.

Default: WARNING

Log Levels:

Level|Name
-----|----
0|EMERG
1|ALERT
2|CRIT
3|ERR
4|WARNING
5|NOTICE
6|INFO
7|DEBUG

Example: Enable verbose debug output
```
SYS:LOG DEBUG
```

#### SYStem:LOG?
Display current system logging level.

Example:
```
SYS:LOG?
NOTICE
```

#### SYStem:SYSLOG
Set the syslog logging level. This controls the level of logging to a remote
syslog server.

Default: ERR

Log Levels:

Level|Name
-----|----
0|EMERG
1|ALERT
2|CRIT
3|ERR
4|WARNING
5|NOTICE
6|INFO
7|DEBUG

Example: Enable logging of NOTICE (and lower level) message:
```
SYS:LOG NOTICE
```

#### SYStem:SYSLOG?
Display current syslog logging level.

Example:
```
SYS:SYSLOG?
ERR
```

#### SYStem:DISPlay
Set display (module) parameters as a comma separated list.

This can be used to set display module type if cannot be automatically detected.
Additionally this can be used to set some display parameters like brightness.

Default: default

Currently supported values:

Value|Description|Notes
-----|-----------|-----
default|Use default settings (auto-detect).
128x64|OLED 128x64 module installed.|OLED
128x128|OLED 128x128 module installed.|OLED
132x64|OLED 132x64 installed (some 1.3" 128x64 modules need this setting!)|OLED
flip|Flip display (upside down)|OLED and LCD
invert|Invert display|OLED and LCD
brightness=n|Set display brightness (%) to n (where n=0..100) [default: 50]|OLED
rotate=n|Rotate display n degrees (where n=0, 90, 180, 270) [default: 90]|LCD only
swapcolors|Swap Red and Blue colors (use if colors dont show up correctly)|LCD only
spifreq=n|Set SPI Bus frequency (values < 1000 assumed to be in MHz, values >1000 assumed to be in Hz)  [default: 48 (MHz)]|LCD only
16bit|Use 16bit SPI bus transfers only (needed often for display modules made for Raspberry Pi)|LCD only

Example: 1.3" (SH1106) module installed that doesn't get detected correctly
```
SYS:DISP 132x64
```

Example: Invert display and set brightnes to 30%
```
SYS:DISP default,invert,brightness=30
```

#### SYStem:DISPlay?
Display current display module setting.

Example:
```
SYS:DISP?
132x64,flip,invert,brightness=75
```

#### SYStem:DISPlay:LAYOUTR
Configure (OLED) Display layout for the right side of the screen.

Layout is specified as a comma delimited string descibing what to
display on each row (8 rows available if using 128x64 OLEd module, 10 rows available with 128x128 pixel modules).

Syntax: <R1>,<R2>,...<R8>

Where tow specifications can be one of the following:

Type|Description|Notes
----|-----------|-----
Mn|MBFan input n|n=1..4
Sn|Sensor input n|n=1..3
Vn|Virtual Sensor input n|n=1..8
-|Horizontal Line|
Ltext|Line with "text"|Max lenght 9 characters.


Default: <not set>

When this setting is not set following defaults are used based
on the OLED module size:

Screen Size|Available Rows|Default Configuration
-----------|--------------|---------------------
128x64|8|M1,M2,M3,M4,-,S1,S2,S3
128x128|10|LMB Inputs,M1,M2,M3,M4,-,LSensors,S1,S2,S3

Example: configure custom theme (for 128x64 display):
```
SYS:DISP:LAYOUTR M1,M2,-,S1,S2,S3,V1,V2
```

#### SYStem:DISPlay:LAYOUTR?
Display currently configured (OLED) Display layout for the right side of the screen.

Example:
```
SYS:DISP:THEME?
M1,M2,-,S1,S2,S3,V1,V2
```


#### SYStem:DISPlay:LOGO
Configure (LCD) Display boot logo.

Currently available logos:

Name|Description
----|-----------
default|Default FanPico boot logo.
custom|Custom boot logo (only available if firmware has been compiled with custom logo included).

Example: configure custom logo
```
SYS:DISP:LOGO custom
```

#### SYStem:DISPlay:LOGO?
Display currently configured (LCD) Display boot logo.

Example:
```
SYS:DISP:LOGO?
default
```


#### SYStem:DISPlay:THEMe
Configure (LCD) Display theme to use.

Default: default

Example: configure custom theme
```
SYS:DISP:THEME custom
```

#### SYStem:DISPlay:THEMe?
Display currently configured (LCD) display theme name.

Example:
```
SYS:DISP:THEME?
default
```


#### SYStem:ECHO
Enable or disaple local echo on the console.
This can be useful if interactively programming Fanpico.

Value|Status
-----|------
0|Local Echo disabled.
1|Local Echo enabled.

Default: 0

Example: enable local echo
```
SYS:ECHO 1
```

Example: disable local echo
```
SYS:ECHO 0
```

#### SYStem:ECHO?
Display local echo status:

Example:
```
SYS:ECHO?
0
```


#### SYStem:FANS?
Display number of FAN output ports available.

Example:
```
SYS:FANS?
8
```


#### SYStem:LED
Set system indicator LED operating mode.

Supported modes:

mode|description
----|-----------
0   | LED blinking slowly  [default]
1   | LED on (continuously)
2   | LED off


Default: 0

Example to set LED to be on continuously:
```
SYS:LED 1
```

#### SYStem:LED?
Query current system LED operating mode.

Example:
```
SYS:LED?
0
```


#### SYStem:MBFANS?
Display number of MBFAN input ports available.

Example:
```
SYS:MBFANS?
4
```


#### SYStem:NAME
Set name of the system. (Default: fanpico1)

Example:
```
SYS:NAME HomeServer
```


#### SYStem:NAME?
Get name of the system.

Example:
```
SYS:NAME?
HomeServer
```


#### SYStem:SENSORS?
Display number of (temperature) sensors available.
Last temperature sensor is the internal temperature sensor on the
RP2040.

Example:
```
SYS:SENSORS?
3
```

#### SYStem:SERIAL
Enable or disable TTL Serial Console. This is enabled by default if board has this connector.
Reason to disable this could be to use the second I2C bus that is sharing pins with the UART.

Example (disable serial console):
```
SYS:SERIAL 0
```

#### SYStem:SERIAL?
Return status of TTL Serial Console.

Status|Description
------|-----------
1|Enabled
0|Disabled

Example:
```
SYS:SERIAL?
1
```

#### SYStem:SPI
Enable or disable SPI bus (on connector J18). When SPI bus is enabled I22 (OLED display) and Serial TTL connectors cannot be used
as these share pins with the SPI bus. 
Reason to enable SPI bus would be to connect LCD panel on the J18 connector.

Example (enable SPI bus):
```
SYS:SPI 1
```

#### SYStem:SPI?
Return status of SPI bus.

Status|Description
------|-----------
1|Enabled
0|Disabled

Example:
```
SYS:SPI?
0
```


#### SYStem:TIME
Set system Real-Time Clock (RTC) time.

This command expects time in following format:
  YYYY-MM-DD HH:MM:SS

Example:
```
SYS:TIME 2022-09-19 18:55:42
```

#### SYStem:TIME?
Return current Real-Time Clock (RTC) time.
This is only available if using Pico W and it has successfully
gotten time from a NTP server or RTC has been initialized using
SYStem:TIME command.

Command returns nothing if RTC has not been initialized.

Example:
```
SYS:TIME?
2022-09-19 18:55:42
```

#### SYStem:TIMEZONE
Set POSIX timezone to use when getting time from a NTP server.
If DHCP server does not supply POSIX Timezone (DHCP Option 100), then this
command can be used to specify local timezone.

This command takes POSIX timezone string as argument (or if argument is blank,
then it clears existinh timezone setting).

Example (set Pacific Standard time as local timezone):
```
SYS:TIMEZONE PST8PDT7,M3.2.0/2,M11.1.0/02:00:00
```

Example (clear timezone setting):
```
SYS:TIMEZONE
```

#### SYStem:TIMEZONE?
Return current POSIX timezone setting.

Command returns nothing if no timezone has been set.

Example:
```
SYS:TIMEZONE?
PST8PDT7,M3.2.0/2,M11.1.0/02:00:00
```


#### SYStem:UPTIme?
Return time elapsed since unit was last rebooted.

Example:
```
SYS:UPTIME?
up 4 days, 22 hours, 27 minutes
```


#### SYStem:UPGRADE
Reboot unit to USB (BOOTSEL) mode for firmware upgrade.
This command triggers fanpico to reboot and enter USB "mode", where
new firmware can simply be copied to the USB drive that appears.
After file has been copied, fanpico will automatically reboot to new
firmware image.

Example:
```
SYS:VER?
```


#### SYStem:VERsion?
Display software version and copyright information.

Example:
```
SYS:VER?
```


#### SYStem:VSENSORS?
Display number of virtual (temperature) sensors available.

Example:
```
SYS:VSENSORS?
8
```


#### SYStem:WIFI?
Check if the unit support WiFi networking.
This should be used to determine if any other "WIFI"
commands will be available.

Return values:

0 = No WiFi support (Pico).
1 = WiFi supported (Pico W).

Example:
```
SYS:WIFI?
1
```

#### SYStem:WIFI:COUntry
Set Wi-Fi Country code. By default, the country setting for the wireless adapter is unset.
This means driver will use default world-wide safe setting, which can mean that some channels
are unavailable.

Country codes are two letter (ISO 3166) codes. For example, Finland = FI, Great Britain = GB,
United States of Americ = US, ...

Example:
```
SYS:WIFI:COUNTRY US
```


#### SYStem:WIFI:COUntry?
Return currently configured country code for the Wi-Fi interface.

Codes used are the ISO 3166 standard two letter codes ('XX' means unset/worldwide setting).

Example:

```
SYS:WIFI:COUNTRY?
US
```

#### SYStem:WIFI:HOSTname
Set system hostname. This will be used with DHCP and SYSLOG.
If hostname is not defined then system will default to generating
hostname as follows:
  FanPico-xxxxxxxxxxxxxxxx

(where "xxxxxxxxxxxxxxxx" is the FanPico serial number)

Example:
```
SYS:WIFI:HOSTNAME fanpico1
```


#### SYStem:WIFI:HOSTname?
Return currently configured system hostname.

Example:

```
SYS:WIFI:HOSTNAME?
fanpico1
```


#### SYStem:WIFI:IPaddress
Set staticlly configured IP address.

Set address to "0.0.0.0" to enable DHCP.

Example:

```
SYS:WIFI:IP 192.168.1.42
```

#### SYStem:WIFI:IPaddress?
Display currently configured (static) IP address.
If no static address is configured, DHCP will be used.

Set address to "0.0.0.0" to enable DHCP.

Example:

```
SYS:WIFI:IP?
0.0.0.0
```


#### SYStem:WIFI:MODE
Set WiFi connection mode. Normally this setting is not needed with modern APs.

However, if FanPico is failing to connect to WiFi network, this couldbe
due to old firmware on the AP (upgrading to latest firmare typically helps).
If firmware update did not help or there is no updated firmware available, setting
connection mode to synchronous can help (however this could cause FanPico to "hang" for up to 60 seconds
during boot up).


Mode|Description
------|-----------
0|Asynchronous connection mode (default)
1|Synchronous connection mode (

Default: 0


Example:

```
SYS:WIFI:MODE 1
```

#### SYStem:WIFI:MODE?
Display currently configured WiFi connection mdoe?

Example:

```
SYS:WIFI:MODE?
0

```

#### SYStem:WIFI:NETMASK
Set statically configured netmask.


Example:

```
SYS:WIFI:NETMASK 255.255.255.0
```

#### SYStem:WIFI:NETMASK?
Display currently configured (static) netmask.

Example:

```
SYS:WIFI:NETMASK?
255.255.255.0
```


#### SYStem:WIFI:GATEWAY
Set statically configured default gateway (router).


Example:

```
SYS:WIFI:GATEWAY 192.168.1.1
```

#### SYStem:WIFI:GATEWAY?
Display currently configured default gateway (router).

Example:

```
SYS:WIFI:GATEWAY?
192.168.1.1
```


#### SYStem:WIFI:NTP
Configure IP for NTP server to use.

Set to "0.0.0.0" to use server provided by DHCP.

Example:

```
SYS:WIFI:NTP 192.168.1.10
```

#### SYStem:WIFI:NTP?
Display currently configure NTP server.

Note, "0.0.0.0" means to use DHCP.

Example:

```
SYS:WIFI:NTP?
192.168.1.10
```



#### SYStem:WIFI:SYSLOG
Configure IP for Syslog server to use.

Set to "0.0.0.0" to use server provided by DHCP.

Example:

```
SYS:WIFI:SYSLOG 192.168.1.20
```

#### SYStem:WIFI:SYSLOG?
Display currently configured Syslog server.

Note, "0.0.0.0" means to use DHCP.

Example:

```
SYS:WIFI:SYSLOG?
192.168.1.20
```


#### SYStem:WIFI:MAC?
Display WiFi adapter MAC (Ethernet) address.

Example:

```
SYS:WIFI:MAC?
28:cd:c1:01:02:03
```


#### SYStem:WIFI:SSID
Set Wi-Fi network SSID. FanPico will automatically try joining to this network.

Example
```
SYS:WIFI:SSID mynetwork
```


#### SYStem:WIFI:SSID?
Display currently configured Wi-Fi network SSID.

Example:

```
SYS:WIFI:SSID?
mynetwork
```

#### SYStem:WIFI:STATus?
Display WiFi Link status.

Return value: linkstatus,current_ip,current_netmask,current_gateway

Link Status:

Value|Description
-----|-----------
0    |Link is down.
1    |Connected to WiFi.
2    |Connected to WiFi, but no IP address.
3    |Connected to WiFi with and IP address.
-1   |Connection failed.
-2   |No matching SSID found(could be out of range, or down).
-3   |Authentication failed (wrong password?)

Example:

```
SYS:WIFI:STAT?
1,192.168.1.42,255.255.255.0,192.168.1.1
```

#### SYStem:WIFI:STATS?
Display TCP/IP stack (LwIP) statistics.

NOTE, this command only works on "Debug" builds of the firmware currently.

Example
```
SYS:WIFI:STATS?
```

#### SYStem:WIFI:PASSword
Set Wi-Fi (PSK) password/passrase.

Example
```
SYS:WIFI:PASS mynetworkpassword
```


#### SYStem:WIFI:PASSword?
Display currently configured Wi-Fi (PSK) password/passphrase.

Example:

```
SYS:WIFI:PASS?
mynetworkpassword
```


### WRIte Commands

These commands are for sending (writing) information from host to FanPico unit.

#### WRIte:VSENSORx

Set/update temperature of a virtual sensor. This can be used by a program on the host
system to feed external temperature information into FanPico.


Example: Set VSENSOR1 temperature to 42.1C
```
WRITE:VSENSOR1 42.1
```

