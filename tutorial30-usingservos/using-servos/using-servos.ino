#include <Servo.h>

// make sure its a PWM pin
int servoPin = 9;
int servoPos = 165;
// Create a servo object
Servo myServo;

void setup() {
  Serial.begin(9600);
  // attach a servo pin to send data
  myServo.attach(servoPin);
}

void loop() {
  Serial.println("What angle for the servo? ");
  while (Serial.available() == 0);

  servoPos = Serial.parseInt();

  // Send data to servo
  myServo.write(servoPos);
}
