#ifndef Camera
#define Camera

#include "Arduino.h"
#include <ArduCAM.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include "memorysaver.h"

class TheCamera
{
    public:
        TheCamera(int CamPin, int SDPin);
        void startcam();
        void snapshot();
    private:
        int SPI_CS;
        int SD_CS;
};
#endif