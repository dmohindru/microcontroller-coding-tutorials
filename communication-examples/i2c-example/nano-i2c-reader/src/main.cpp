#include <Arduino.h>
#include <Wire.h>
int ledPin = 2;

void receiveEvent(int howMany);

void setup() {
  Wire.begin(8);
  Wire.onReceive(receiveEvent);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
}

void receiveEvent(int howMany) {
  char c = Wire.read();
  if (c == '0') {
    digitalWrite(ledPin, LOW);
  }
  if (c == '1') {
    digitalWrite(ledPin, HIGH);
  }
}

