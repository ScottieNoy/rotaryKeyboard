#include <Arduino.h>
#include "Potentiometer.h"
#include "connectWiFi.h"
char* ssid = "Oscar";
char* password = "oscar12345";
int potPin = 36;
Potentiometer Potentiometer(potPin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  connect(ssid, password);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Potentiometer.read());
  delay(100);
}