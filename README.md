# Color Blast in a 256px WS2811

https://github.com/user-attachments/assets/03716c18-6d35-4d87-8d95-e7bedabf1666

Each pixel has its `(distance from an arbitrary center) % radius` mapped to an hue value (0-255)

Radius variate based on potenciometer




## WS2811

WS2811 is a RGB addressable matrix

It is composed by a led strip curled in zig-zag

The one used in this project is 16x16


## ESP32 devkit v1 wroom

microcontroler used


## Power supply

5V 3A common source


## FastLED lib

FastLED takes an CRGB array where each item represents one led in strip and generate a PWM sended to matrix


## Circuit setup

![d2tsfem-b818794b-7bfa-4cb5-af47-89bb2340231b](https://github.com/user-attachments/assets/98edf9da-5d70-4a14-bfbe-3e3f60e163b2)

All IO pins may be redefined in macros at start of code

a paper sheet is placed above matrix to difuse light and form a better image
