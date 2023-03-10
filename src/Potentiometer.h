#include "Arduino.h"
class Potentiometer {
  public:
    Potentiometer(int pin);
    int read();
  private:
    int _pin;
};