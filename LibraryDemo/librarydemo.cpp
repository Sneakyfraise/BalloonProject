#include "Arduino.h"
#include "librarydemo.h"

//int _pin;

MyFirstDemo::MyFirstDemo(int pin)
{
    _pin = pin;
}

void MyFirstDemo::flash()
{
    digitalWrite(_pin, HIGH);
    delay(250);
    digitalWrite(_pin,LOW);
    delay(250);
}