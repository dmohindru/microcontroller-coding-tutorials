#include <Arduino.h>
int myVoltPin = A2;
int readVal;
float V2;
int waitT = 1000;

void setup() {
    Serial.begin(9600);
}

void loop() {

    readVal = analogRead(myVoltPin);
    V2 = (5./1023.0)*readVal;
    Serial.print("readVal = ");
    Serial.print(readVal);
    Serial.print(", V2 = ");
    Serial.println(V2);
    delay(waitT);
}