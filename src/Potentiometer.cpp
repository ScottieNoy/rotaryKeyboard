#include "Potentiometer.h"

Potentiometer::Potentiometer(int pin) {
    _pin = pin;
    pinMode(_pin, INPUT);
};

int Potentiometer::read() {
    return map(analogRead(_pin), 0, 4095, 0, 30);
};
