#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT+13;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility
#define LED_BUILTIN LED_BUILTIN
#define RGB_BUILTIN LED_BUILTIN
#define RGB_BRIGHTNESS 64

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 4;
static const uint8_t SCL = 15;

static const uint8_t SS = 21;
static const uint8_t MOSI = 5;
static const uint8_t MISO = 18;
static const uint8_t SCK = 19;

static const uint8_t A0 = 36;
static const uint8_t A1 = 39;
static const uint8_t A2 = 32;
static const uint8_t A3 = 33;
static const uint8_t A4 = 34;
static const uint8_t A5 = 35;

static const uint8_t T0 = 34;
static const uint8_t T1 = 35;
static const uint8_t T2 = 27;
static const uint8_t T3 = 14;
static const uint8_t T4 = 12;
static const uint8_t T5 = 13;	

static const uint8_t D0 = 23;
static const uint8_t D1 = 22;
static const uint8_t D2 = 1;
static const uint8_t D3 = 3;
static const uint8_t D4 = 21;
static const uint8_t D5 = 19;
static const uint8_t D6 = 18;
static const uint8_t D7 = 5;
static const uint8_t D8 = 0;
static const uint8_t D9 = 2;
static const uint8_t D10 = 4;
static const uint8_t D11 = 15;
static const uint8_t D12 = 13;
static const uint8_t D13 = 12;
static const uint8_t D14 = 14;
static const uint8_t D15 = 27;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

static const uint8_t PWM0 = 23;
static const uint8_t PWM1 = 22;

#endif /* Pins_Arduino_h */