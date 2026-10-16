#include "rgbcontrol.h"

// Declare PWM-capable pin numbers and identifier
const int rpin = 9;
const int gpin = 10;
const int bpin = 11;
const int n = 1;

// Instantiate object GLOBALLY so loop() can see it
rgbObj myLED(rpin, gpin, bpin, n);

void setup() {
  Serial.begin(9600);
}

void loop() {

  // 1. Set yellow -> display yellow -> delay(500) -> print rgb value
  myLED.setYellow(255, 255);
  delay(500);
  myLED.printRGB();


  // 2. Set new color (Cyan) -> display color -> delay(500) -> print rgb value
  myLED.setColor(0, 255, 255);
  delay(500);
  myLED.printRGB();

  // 3. Set new color (Magenta) -> display color -> delay(500) -> print rgb value
  myLED.setColor(255, 0, 255);
  delay(500);
  myLED.printRGB();

  // 4. LED off -> delay(500)
  myLED.setOFF();
  delay(500);
}