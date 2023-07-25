#ifndef librarydemo
#define librarydemo

#include "Arduino.h"

class MyFirstDemo
{
    public:
        MyFirstDemo(int pin);
        void flash();
    private:
        int _pin;
};
#endif