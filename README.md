# m5midi
Convert 2 m5stack 8 rotary control boards into a full MIDI controller using a RPI Pico 2040

Project Goals
==================
Phase I

✅ Dual M5Stack 8Encoder support

✅ USB MIDI

✅ DIN MIDI OUT

✅ 16 RGB LEDs

✅ 16 encoder buttons

✅ SSD1306 OLED

✅ Modular architecture

----------------------------------------------------

Phase II

Relative encoder mode

Acceleration

Flash configuration

Toggle switches

Better OLED UI

----------------------------------------------------

Phase III

USB configuration utility

Web UI

Presets

MIDI IN LED feedback

--------------------------------------------------

Required Libraries:

Philhower RP2040 Core

TinyUSB (included)

Wire

SSD1306 OLED library

M5Stack 8Encoder library (or our own driver if it proves cleaner)

Coding Standards

I'd like to follow a few rules consistently:

CamelCase for classes

snake_case for variables

constexpr instead of #define

No dynamic allocation (new/malloc) after startup

Fixed-size arrays wherever practical

Strong typing with enum class

Clear separation between hardware access and application logic
