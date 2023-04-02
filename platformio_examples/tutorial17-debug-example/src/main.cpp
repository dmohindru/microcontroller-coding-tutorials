#include <Arduino.h>
#include "avr8-stub.h"

int dv = 500;
void setup() {
    debug_init();
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(dv);
    digitalWrite(LED_BUILTIN, LOW);
    delay(dv);
}