int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed;
int tiltSwitchPin = 2;
int tiltSwitchVal;
void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(tiltSwitchPin, INPUT);
  // Enable arduino internal pull up registors
  digitalWrite(tiltSwitchPin, HIGH);
  // Set direction of motors
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  Serial.begin(9600);

}

void loop() {
  
  tiltSwitchVal = digitalRead(tiltSwitchPin);
  // When tilt switch is actived its read value in zero
  if (tiltSwitchVal) {
    analogWrite(speedPin, 0);
  } else {
    analogWrite(speedPin, 255);
  }
  Serial.println(tiltSwitchVal);

}
