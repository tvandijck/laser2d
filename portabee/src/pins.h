#ifndef PINS_H
#define PINS_H

#ifndef __AVR_ATmega644P__
#ifndef __AVR_ATmega1284P__
#error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
#endif
#endif

#define X_MS1_PIN       -1
#define X_MS2_PIN       -1
#define Y_MS1_PIN       -1
#define Y_MS2_PIN       -1
#define Z_MS1_PIN       -1
#define Z_MS2_PIN       -1
#define E0_MS1_PIN      -1
#define E0_MS2_PIN      -1
#define E1_MS1_PIN      -1
#define E1_MS2_PIN      -1
#define DIGIPOTSS_PIN   -1


#define KNOWN_BOARD      1

//x axis pins
#define X_STEP_PIN      15
#define X_DIR_PIN       18
#define X_ENABLE_PIN    19
#define X_STOP_PIN      20

//y axis pins
#define Y_STEP_PIN      23
#define Y_DIR_PIN       22
#define Y_ENABLE_PIN    24
#define Y_STOP_PIN      10

//z axis pins
#define Z_STEP_PIN      27
#define Z_DIR_PIN       28
#define Z_ENABLE_PIN    29
#define Z_STOP_PIN      0

//extruder pins
#define E0_STEP_PIN      4
#define E0_DIR_PIN       2
#define E0_ENABLE_PIN    3
#define TEMP_0_PIN       5
#define TEMP_1_PIN       6


#define TEMP_2_PIN      -1
#define HEATER_0_PIN    14
#define HEATER_1_PIN    21
#define HEATER_2_PIN    -1
#define HEATER_BED_PIN  30
#define TEMP_BED_PIN     0
#define SDPOWER         -1
#define SDSS            17
#define LED_PIN         -1
#define FAN_PIN         -1
#define PS_ON_PIN       -1
#define KILL_PIN        -1
//our pin for debugging.

#define DEBUG_PIN        0

//our RS485 pins
#define TX_ENABLE_PIN   12
#define RX_ENABLE_PIN   13


//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, HEATER_0_PIN,
#define _E1_PINS
#define _E2_PINS

#ifdef X_STOP_PIN
  #if X_HOME_DIR < 0
    #define X_MIN_PIN X_STOP_PIN
    #define X_MAX_PIN -1
  #else
    #define X_MIN_PIN -1
    #define X_MAX_PIN X_STOP_PIN
  #endif
#endif

#ifdef Y_STOP_PIN
  #if Y_HOME_DIR < 0
    #define Y_MIN_PIN Y_STOP_PIN
    #define Y_MAX_PIN -1
  #else
    #define Y_MIN_PIN -1
    #define Y_MAX_PIN Y_STOP_PIN
  #endif
#endif

#ifdef Z_STOP_PIN
  #if Z_HOME_DIR < 0
    #define Z_MIN_PIN Z_STOP_PIN
    #define Z_MAX_PIN -1
  #else
    #define Z_MIN_PIN -1
    #define Z_MAX_PIN Z_STOP_PIN
  #endif
#endif

#ifdef DISABLE_MAX_ENDSTOPS
#define X_MAX_PIN          -1
#define Y_MAX_PIN          -1
#define Z_MAX_PIN          -1
#endif

#ifdef DISABLE_MIN_ENDSTOPS
#define X_MIN_PIN          -1
#define Y_MIN_PIN          -1
#define Z_MIN_PIN          -1
#endif

#define SENSITIVE_PINS {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, PS_ON_PIN, \
                        HEATER_BED_PIN, FAN_PIN,                  \
                        _E0_PINS _E1_PINS _E2_PINS             \
                        analogInputToDigitalPin(TEMP_0_PIN), analogInputToDigitalPin(TEMP_1_PIN), analogInputToDigitalPin(TEMP_2_PIN), analogInputToDigitalPin(TEMP_BED_PIN) }

#endif //__PINS_H
