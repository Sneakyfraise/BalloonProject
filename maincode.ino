#include <Camera.h>

int SDPin = 9;
int CamPin = 7;

TheCamera cam1(CamPin, SDPin);

void setup() {
  cam1.startcam();

}

void loop() {
  cam1.snapshot();
  delay(5000);

}
