#include <Servo.h>
// Create Servo object
Servo myServo;

int photoPin = A0;
int photoPinValue;
// make sure its a PWM pin
int servoPin = 9;
int dv = 100;
int servoPos = 0;
void setup() {
  Serial.begin(9600);
  pinMode(photoPin, INPUT);
  pinMode(servoPin, OUTPUT);
  // attach pin to servo to send data
  myServo.attach(servoPin);

}

void loop() {
  photoPinValue = analogRead(photoPin);
  Serial.println(photoPinValue);
  
  servoPos = (int)((180.0/1024.0) * photoPinValue);


  // Write data to servo
  myServo.write(servoPos);
  
  delay(dv);

}
