#include <Servo.h>

// Create Servo Objects
Servo xServo;
Servo yServo;
// Servo controlling pin
int xServoOutPin = 6;
int yServoOutPin = 5;
// Led controlling pin
int ledOutPin = 4;
// Joystick pins
// Analog Input pins
int xInput = A0;
int yInput = A1;
// Joystick Digital Input
int switchInPin = 2;
// Delay value
int dv = 250;
// Variable to read values
int xJoyStickValue, yJoyStickValue, switchValue, xServoControlVal, yServoControlVal;


void setup() {
  Serial.begin(9600);
  pinMode(xServoOutPin, OUTPUT);
  pinMode(yServoOutPin, OUTPUT);
  pinMode(ledOutPin, OUTPUT);
  pinMode(switchInPin, INPUT);

  // attach control pins to servos
  xServo.attach(xServoOutPin);
  yServo.attach(yServoOutPin);
  digitalWrite(switchInPin, HIGH);

}

void loop() {

  // Read values from Joystick
  xJoyStickValue = analogRead(xInput);
  yJoyStickValue = analogRead(yInput);
  switchValue = digitalRead(switchInPin);

  // Switch On and off Led according to value read from switch pin
  if (!switchValue) {
    digitalWrite(ledOutPin, HIGH);
  } else {
    digitalWrite(ledOutPin, LOW);
  }

  // Display these values
  Serial.print("xJoyStickValue = ");
  Serial.print(xJoyStickValue);
  Serial.print(", yJoyStickValue = ");
  Serial.print(yJoyStickValue);
  Serial.print(", switchValue = ");
  Serial.println(switchValue);

  // Write Servo control value
  if (xJoyStickValue > 0 && xJoyStickValue < 300) {
    xServo.write(0);
  } else if (xJoyStickValue > 300 && xJoyStickValue < 600) {
    xServo.write(45);
  } else if (xJoyStickValue > 600 && xJoyStickValue < 900) {
    xServo.write(90);
  } else if (xJoyStickValue > 900) {
    xServo.write(160);
  }

  if (yJoyStickValue > 0 && yJoyStickValue < 300) {
    yServo.write(0);
  } else if (yJoyStickValue > 300 && yJoyStickValue < 600) {
    yServo.write(45);
  } else if (yJoyStickValue > 600 && yJoyStickValue < 900) {
    yServo.write(90);
  } else if (yJoyStickValue > 900) {
    yServo.write(160);
  } 
  


  delay(dv);


}
