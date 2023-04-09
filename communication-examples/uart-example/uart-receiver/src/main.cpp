#include <Arduino.h>
#include <SoftwareSerial.h>

int ledPin = 9;
SoftwareSerial Serial1{7, 2};

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(ledPin, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(ledPin, LOW);
    Serial1.begin(9600);
}

void loop() {
    while (Serial1.available() >= 0) {
        char receivedData = Serial1.read();
        if (receivedData == '1') {
            digitalWrite(LED_BUILTIN, HIGH); // switch LED On
            digitalWrite(ledPin, HIGH);
        }
        else if (receivedData == '2') {
            digitalWrite(LED_BUILTIN, LOW);  // switch LED Off
            digitalWrite(ledPin, LOW);
        }
    }
}