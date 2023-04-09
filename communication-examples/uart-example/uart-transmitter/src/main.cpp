#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial Serial1{7, 2};


void setup() {
    Serial.begin(9600);
    Serial1.begin(9600);

}



void loop() {
    if (Serial.available() > 0) {
        int inByte = Serial.read();
        switch (inByte) {
            case '1':
                Serial1.println('1');
                delay(100);
                Serial.println("Board 1: LED ON");
                break;
            case '2':
                Serial1.println('2');
                delay(100);
                Serial.println("Board 1: LED OFF");
                break;
            default:
                Serial.println("Unknown command");
        }
    }

}