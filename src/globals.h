#ifndef _globals_H_
#define _globals_H_

#include <Arduino.h>

#include "blinker.h"

#define V_IN_ADC_PIN 1

#define V_CAP_ADC_PIN 2

#define LED_VIN_PORT 0  // port A
#define LED_VIN_PIN 7
#define LED_VCAP_PORT 1  // port B
#define LED_VCAP_PIN 2
#define LED_STATUS_PORT 1  // port B
#define LED_STATUS_PIN 1

#define EN5V_PORT 0  // port A
#define EN5V_PIN 3

#define VERSION_PIN 5

extern PatternBlinker status_blinker;
extern RatioBlinker led_vin_blinker;
extern RatioBlinker supercap_blinker;

extern elapsedMillis watchdog_elapsed;
extern volatile int watchdog_limit;
extern bool watchdog_value_changed;

extern uint8_t i2c_register;

extern unsigned int power_on_vcap_voltage;
extern unsigned int power_off_vcap_voltage;

extern unsigned int v_supercap;
extern unsigned int v_in;

extern bool shutdown_requested;

#endif
