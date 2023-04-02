#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial Serial2(7, 2);
SoftwareSerial Serial3(3, 6);


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
  Serial1.begin(9600);
  Serial2.begin(9600);
  Serial3.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
}