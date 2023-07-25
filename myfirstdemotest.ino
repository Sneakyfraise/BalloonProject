#include <librarydemo.h>

int pin1 = 13;

MyFirstDemo tester(pin1);

void setup() {
  pinMode(pin1, OUTPUT);
}

void loop() {
  tester.flash();

}
