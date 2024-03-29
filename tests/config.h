// !!!! DO NOT EDIT !!!, use: make config

#ifndef _CONFIG_H_
#define _CONFIG_H_

#define CONFIG_FREQUENCY 868
#define OPTION_TIME_DISPLAY 0
// CONFIG_METRIC_ONLY is not set
// FIXEDPOINT is not set
#ifndef THIS_DEVICE_ADDRESS
#define THIS_DEVICE_ADDRESS {0xed,0xc0,0xbb,0x25}
#endif // THIS_DEVICE_ADDRESS
// USE_LCD_CHARGE_PUMP is not set
#define USE_WATCHDOG
// DEBUG is not set
#define CONFIG_DAY_OF_WEEK
#define CONFIG_TEST
// CONFIG_EGGTIMER is not set
// CONFIG_PHASE_CLOCK is not set
// CONFIG_ALTITUDE is not set
// CONFIG_VARIO is not set
// CONFIG_ALTI_ACCUMULATOR is not set
// CONFIG_PROUT is not set
// CONFIG_SIDEREAL is not set
#define CONFIG_DST 0
// CONFIG_INFOMEM is not set
#define CONFIG_ACCEL
// CONFIG_STRENGTH is not set
// CONFIG_ALARM is not set
// CONFIG_BATTERY is not set
#define CONFIG_CLOCK
#define CONFIG_DATE
#define CONFIG_RFBSL
// CONFIG_STOP_WATCH is not set
#define CONFIG_TEMP
#define CONFIG_USEPPT
// CONFIG_USE_SYNC_TOSET_TIME is not set
// CONFIG_USE_DISCRET_RFBSL is not set
// CONFIG_USE_GPS is not set
// CONFIG_CW_TIME is not set

#endif // _CONFIG_H_
