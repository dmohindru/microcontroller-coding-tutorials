#include <Stepper.h>
int stepsPerRevolution = 2048;

int motSpeed = 10;
int switchPin = 2;
int switchPinVal;
int oldValue = 1;
int step = 1;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);


void setup() {
  Serial.begin(9600);
  // Set stepper motor speed
  myStepper.setSpeed(motSpeed);
  // Step switch pins
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);

}

void loop() {

  // Read switch pin value
  switchPinVal = digitalRead(switchPin);
  // toggle step direction
  if (!switchPinVal && oldValue) {
    Serial.println("Switched pressed!");
    step *
  myStepper.step(step);
  oldValue = switchPinVal;

}
