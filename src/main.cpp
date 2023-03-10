#include <Arduino.h>
#include "Potentiometer.h"
int potPin = 36;
Potentiometer Potentiometer1(potPin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Potentiometer1.read());
  delay(100);
}