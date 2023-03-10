#include <Arduino.h>
int potPin = 36;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = map(analogRead(potPin), 0, 4095, 0, 30);
  Serial.println(potValue);
  delay(100);
}