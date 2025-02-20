# Color Blast in a 256px WS2812

https://github.com/user-attachments/assets/03716c18-6d35-4d87-8d95-e7bedabf1666

Each pixel has its `(distance from an arbitrary center) % radius` mapped to an hue value (0-255)

Radius variate based on potenciometer




## WS2811

WS2811 is a RGB addressable matrix

It is composed by a led strip curled in zig-zag

The one used in this project is 16x16


## FastLED lib

FastLED takes an CRGB array where each item represents one led in strip and generate a PWM sended to matrix


## Circuit setup

All IO pins may be redefined in macros at start of code

- WS2812

- Power supply
    
    5V 3A  

- ESP32 devkit v1 wroom

    powered by VIN

- 10K potenciometer

    powered by ESP 3.3V


a paper sheet is placed above matrix to difuse light and form a better image
