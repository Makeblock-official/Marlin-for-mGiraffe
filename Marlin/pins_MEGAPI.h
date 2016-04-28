/**
 * Board MegaPi pin assignments
 */
#ifndef __AVR_ATmega2560__
  #error Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu.
#endif
#define X_STEP_PIN          12
#define X_DIR_PIN           11
#define X_ENABLE_PIN        35
#define X_STOP_PIN          24

#define Y_STEP_PIN          8
#define Y_DIR_PIN           7
#define Y_ENABLE_PIN       36
#define Y_STOP_PIN         25

#define Z_STEP_PIN          9
#define Z_DIR_PIN           6
#define Z_ENABLE_PIN       	42
#define Z_STOP_PIN          26

#if ENABLED(Z_MIN_PROBE_ENDSTOP)
  // Define a pin to use as the signal pin on Arduino for the Z_PROBE endstop.
  #define Z_MIN_PROBE_PIN  27
#endif


#define E0_STEP_PIN         5
#define E0_DIR_PIN          4
#define E0_ENABLE_PIN      59//A5

#define X_MS1_PIN         34
#define X_MS2_PIN         33
#define X_MS3_PIN         32
#define X_RESET_PIN       31
#define X_SLEEP_PIN       18

#define Y_MS1_PIN         37
#define Y_MS2_PIN         40
#define Y_MS3_PIN         41
#define Y_RESET_PIN       38
#define Y_SLEEP_PIN       19

#define Z_MS1_PIN         43
#define Z_MS2_PIN         47
#define Z_MS3_PIN         48
#define Z_RESET_PIN       49
#define Z_SLEEP_PIN       9

#define E_MS1_PIN         58
#define E_MS2_PIN         57
#define E_MS3_PIN         56
#define E_RESET_PIN       55
#define E_SLEEP_PIN       2


#define SDPOWER            -1
#define SDSS               63//A9
#define LED_PIN            -1
#define FAN_PIN            23
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN       10
#define HEATER_1_PIN       -1
#define HEATER_2_PIN       -1
#define TEMP_0_PIN          6   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_2_PIN         -1   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define HEATER_BED_PIN     54//A0
#define TEMP_BED_PIN        7


#define LCD_PINS_RS        69//A15
#define LCD_PINS_ENABLE    68//A14
#define LCD_PINS_D4        67//A13
#define LCD_PINS_D5        66//A12
#define LCD_PINS_D6        65//A11
#define LCD_PINS_D7        64//A10

#define BTN_EN1 			29
#define BTN_EN2 			28
#define BTN_ENC 			30

#define SD_DETECT_PIN  		62//A8
#define BEEPER_PIN 			39

