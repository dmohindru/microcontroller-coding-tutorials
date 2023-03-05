#include<Arduino.h>
extern void print(char *message, int time) {
    Serial.println("Hello World");
    delay(time);
}