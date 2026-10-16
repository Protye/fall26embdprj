#include "RGB_CONTROL.h"

// Declare pin numbers and identifier
const int rpin = A0;
const int gpin = A1;
const int bpin = A2;
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
  led.getColor(r, g, b);
  Serial.print("Current RGB: R=");
  Serial.print(r);
  Serial.print(" G=");
  Serial.print(g);
  Serial.print(" B=");
  Serial.println(b);

  // 2. Set new color (Cyan) -> display color -> delay(500) -> print rgb value
  myLED.setColor(0, 255, 255);
  delay(500);
  led.getColor(r, g, b);
  Serial.print("Current RGB: R=");
  Serial.print(r);
  Serial.print(" G=");
  Serial.print(g);
  Serial.print(" B=");
  Serial.println(b);

  // 3. Set new color (Magenta) -> display color -> delay(500) -> print rgb value
  myLED.setColor(255, 0, 255);
  delay(500);
  led.getColor(r, g, b);
  Serial.print("Current RGB: R=");
  Serial.print(r);
  Serial.print(" G=");
  Serial.print(g);
  Serial.print(" B=");
  Serial.println(b);

  // 4. LED off -> delay(500)
  myLED.setOFF();
  delay(500);
}