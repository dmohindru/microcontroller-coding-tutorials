/*
Author: Dhruv Mohindru
Date: 11/12/2022
Description: This program counts from 0 to 31 and output the result on outputs pins
4(bit4), 5 (bit3), 6(bit2), 7(bit1), 8(bit0) 
*/
int bit0 = 8;
int bit1 = 7;
int bit2 = 6;
int bit3 = 5;
int bit4 = 4;
int counterDelay = 1000;
int mask = 0x01;
int counterLimit = 31;
void setup() {
  pinMode(bit0, OUTPUT);
  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);
  pinMode(bit3, OUTPUT);
  pinMode(bit4, OUTPUT);

}

void loop() {
  int counter = 0;
  //forever loop
  for (;;) {
    if (counter > counterLimit) {
      counter = 0;
    }
    // write to bit0  
    digitalWrite(bit0, (counter)&mask);
    // write to bit1
    digitalWrite(bit1, (counter>>1)&mask);
    // write to bit2
    digitalWrite(bit2, (counter>>2)&mask);
    // write to bit3
    digitalWrite(bit3, (counter>>3)&mask);
    // write to bit3
    digitalWrite(bit4, (counter>>4)&mask);
    // some delay
    delay(counterDelay);
    counter++;

  }

}
