//#include <Arduino.h>
#include <SoftwareSerial.h>
#include "Commands.h"

int redPin = 5;
int greenPin = 4;
int bluePin = 3;
bool redLedStatus;
bool greenLedStatus;
bool blueLedStatus;

SoftwareSerial Serial1{7, 2};

void setup() {
    Serial1.begin(19200);
    Serial.begin(19200);
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    redLedStatus = false;
    greenLedStatus = false;
    blueLedStatus = false;
}

void loop() {

    while (Serial1.available() == 0);

    String receivedData = Serial1.readString();
    Serial.print("Data Received: ");
    Serial.println(receivedData);

    if (receivedData == redOnCmd) {
        digitalWrite(redPin, HIGH);
        Serial1.print(okResponse);
        redLedStatus = true;
    } else if (receivedData == redOffCmd) {
        digitalWrite(redPin, LOW);
        Serial1.print(okResponse);
        redLedStatus = false;
    } else if (receivedData == greenOnCmd) {
        digitalWrite(greenPin, HIGH);
        Serial1.print(okResponse);
        greenLedStatus = true;
    } else if (receivedData == greenOffCmd) {
        digitalWrite(greenPin, LOW);
        Serial1.print(okResponse);
        greenLedStatus = false;
    } else if (receivedData == blueOnCmd) {
        digitalWrite(bluePin, HIGH);
        Serial1.print(okResponse);
        blueLedStatus = true;
    } else if (receivedData == blueOffCmd) {
        digitalWrite(bluePin, LOW);
        Serial1.print(okResponse);
        blueLedStatus = false;
    } else if (receivedData == allOnCmd) {
        digitalWrite(redPin, HIGH);
        digitalWrite(greenPin, HIGH);
        digitalWrite(bluePin, HIGH);
        Serial1.print(okResponse);
        redLedStatus = true;
        greenLedStatus = true;
        blueLedStatus = true;
    } else if (receivedData == allOffCmd) {
        digitalWrite(redPin, LOW);
        digitalWrite(greenPin, LOW);
        digitalWrite(bluePin, LOW);
        Serial1.print(okResponse);
        redLedStatus = false;
        greenLedStatus = false;
        blueLedStatus = false;
    } else if (receivedData == statusCmd) {
        String response = getStatusString(redLedStatus, greenLedStatus, blueLedStatus);
        Serial1.print(response);
    } else if (receivedData == featureCmd) {
        String response = getFeatureString();
        Serial1.print(response);
    } else if (receivedData == heartBeatCmd) {
      Serial1.print(okResponse);
    } else {
        Serial1.print(failResponse);
    }

}

String getStatusString(bool redStatus, bool greenStatus, bool blueStatus) {
    String status{};
    redStatus ? status.concat("redLed:on;") : status.concat("redLed:off;");
    greenStatus ? status.concat("greenLed:on;") : status.concat("greenLed:off;");
    blueStatus ? status.concat("blueLed:on;") : status.concat("blueLed:off;");
    return status;
}

String getFeatureString() {
    String features{};
    features.concat("redLed;");
    features.concat("greenLed;");
    features.concat("blueLed;");
    return features;
}