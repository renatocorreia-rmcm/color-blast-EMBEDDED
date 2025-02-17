# Color Blast in a 256px WS2811


https://github.com/user-attachments/assets/03716c18-6d35-4d87-8d95-e7bedabf1666
<p>radius variate based on potenciometer</p>


<br>

## WS2811
<p>WS2811 is a RGB addressable matrix</p>
<p>It is composed by a led strip curled in zig-zag</p>
<p>The one used in this project is 16x16</p>

## ESP32 devkit v1 wroom
<p>microcontroler used</p>

## Power supply
<p>5V 3A common source</p>


## FastLED lib
<p>FastLED takes an CRGB array where each item represents one led in strip and generate a PWM sended to matrix</p>


## Circuit setup

![d2tsfem-b818794b-7bfa-4cb5-af47-89bb2340231b](https://github.com/user-attachments/assets/98edf9da-5d70-4a14-bfbe-3e3f60e163b2)
<p>All IO pins may be redefined in macros at start of code</p>

<p>a paper sheet is placed above matrix to difuse light and form a better image</p>
