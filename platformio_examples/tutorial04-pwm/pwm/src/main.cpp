#include <Arduino.h>
int ledPin = 2;
int step = 50;
int dv = 2000;
void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    for (int brightness = 5; brightness < 255; brightness += step) {
        analogWrite(ledPin, brightness);
        delay(dv);
    }
}