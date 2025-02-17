#include <FastLED.h>



#define NUM_LEDS 256

#define DATA_PIN 32

#define X_PIN 12
#define Y_PIN 13
#define POTENCIOMETER_PIN

#define BRIGHTNESS 7



//abstraction of the matrix as an cartesian plan
int geti(int x, int y){

  if(y%2==1)  return (y+1)*16-x-1;
  else        return y*16+x;

}

CRGB leds[NUM_LEDS];

void setup() {
  // sanity check delay - allows reprogramming if accidently blowing power w/leds
  delay(2000);

  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}


// coordinates of circunference center  // could be redefined each color loop
float xo = 8;
float yo = 8;


float radius;
int dist;  // dist of each point from radius

void loop() {

  for (int i = 255; i>=0; i--){  // color loop

    radius = 16/1.41 + analogRead(POTENCIOMETER_PIN)*48/4095;  // 16*V2/2 - 16*V2/2+48

    for(int r = 0; r < 16; r++) {
        for (int c = 0; c<16; c++){

          dist = sqrt((c-xo)*(c-xo)+(r-yo)*(r-yo));  // 0 - 16V2
          //dist = max(abs(r-yo),abs(c-xo));  // square form
          leds[geti(c,r)] = CHSV(((int)(dist*255/(radius)+i))%256, 255,255);

        }
    }

    FastLED.show(); 
  }



}
