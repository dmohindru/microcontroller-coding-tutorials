#include <Arduino.h>
int pin0 = 2;
int pin1 = 3;
int pin2 = 4;
int pin3 = 5;
int counter = 0;
int mask = 0x01;
int counterLimit = 31;
int dv = 500;
void setup() {
    pinMode(pin0, OUTPUT);
    pinMode(pin1, OUTPUT);
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
}

void loop() {
    if (counter > counterLimit) {
        counter = 0;
    }
    digitalWrite(pin0, counter & mask);
    digitalWrite(pin1, (counter >> 1) & mask);
    digitalWrite(pin2, (counter >> 2) & mask);
    digitalWrite(pin3, (counter >> 3) & mask);
    delay(dv);
    counter++;
}