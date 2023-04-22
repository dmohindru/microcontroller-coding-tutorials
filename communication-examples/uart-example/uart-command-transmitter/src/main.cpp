#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial Serial1{7, 2};
int resetPin = 12;
String resetCmd = "reset";

void setup() {
    Serial.begin(19200);
    Serial1.begin(19200);
    pinMode(resetPin, OUTPUT);
    digitalWrite(resetPin, HIGH);
}


void loop() {
    while (Serial.available() == 0);
    String cmd = Serial.readString();

    // if reset command received
    if (cmd == resetCmd) {
        digitalWrite(resetPin, LOW);
        delay(100);
        digitalWrite(resetPin, HIGH);
        return;
    }

    // Send command to remote arduino
    Serial1.print(cmd);

    // Receive command from remote arduino
    while (Serial1.available() == 0);
    String response = Serial1.readString();

    Serial.print("Response: ");
    Serial.println(response);
}