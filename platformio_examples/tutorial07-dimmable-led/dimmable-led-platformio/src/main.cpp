#include <Arduino.h>
int myVoltPin = A2;
int ledPin = 2;
int readVal;
float V2;
int waitT = 100;
int pwmVal = 0;
void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop() {

    readVal = analogRead(myVoltPin);
    V2 = (5./1023.0)*readVal;
    Serial.print("readVal = ");
    Serial.print(readVal);
    Serial.print(", V2 = ");
    Serial.println(V2);
    pwmVal = (int)((255.0/1023.0) * readVal);
    analogWrite(ledPin, pwmVal);
    delay(waitT);
}