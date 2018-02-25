#include <AlaLedRgb.h>

#define BLUEPIN 3
#define GREENPIN 5
#define REDPIN 9

AlaLedRgb rgbLed;

void setup() {
  // put your setup code here, to run once:
  //pin 3 = blue
  //pin 5 = green
  //pin 9 = red
 rgbLed.initPWM(REDPIN, GREENPIN, BLUEPIN);
 rgbLed.setBrightness(0x66FF44);
 rgbLed.setAnimation(ALA_FADECOLORSLOOP, 10000, alaPalRgb);
}

void loop() {
  // put your main code here, to run repeatedly:
 rgbLed.runAnimation();
}
