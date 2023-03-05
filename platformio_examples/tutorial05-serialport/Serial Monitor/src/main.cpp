#include <Arduino.h>
#include "myFunc.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  print("Hello World!", 1000);
}