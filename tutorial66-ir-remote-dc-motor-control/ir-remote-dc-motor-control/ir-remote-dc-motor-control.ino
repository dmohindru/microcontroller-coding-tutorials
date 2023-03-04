#include <IRremote.h>
int IRpin = 9;
IRrecv IR(IRpin);

#define pwr 0x45
#define volP 0x46
#define volM 0x15
#define rewindB 0x44
#define forward 0x43

int speedPin = 5;
int dir1Pin = 4;
int dir2Pin = 3;
int mSpeed=255;
int dir1 = HIGH, dir2 = LOW, power = LOW;
int step = 15;

int dv = 250;

void setup() {

  pinMode(speedPin, OUTPUT);
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);
  Serial.begin(9600);
  IR.enableIRIn(); 

}

void loop() {
  while(IR.decode());
  switch(IR.decodedIRData.command) {
    case pwr:
      Serial.print("power");
      power = !power; 
      break;

    case volP:
      Serial.print("volume up");
      if (mSpeed < 255)
        mSpeed += step;
      break;

    case volM:
      Serial.print("volume down");
      if (mSpeed > 0)
        mSpeed -= 255;
      break;

    case rewindB:
      Serial.print("back");
      dir1 = LOW;
      dir2 = HIGH;
      break;

    case forward:
      Serial.print("forward");
      dir1 = HIGH;
      dir2 = LOW;
      break;

  }


  digitalWrite(dir1Pin, dir1);
  digitalWrite(dir2Pin, dir2);
  
  if (power)
    analogWrite(speedPin, mSpeed);
  
  delay(dv);


}
