int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed;
int xJoyStickPin = A0;
int xJoyStickVal, scaledValue;
int lowZero = 260, highZero = 275; // Range of joystick reading for which motor will remain off
void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(xJoyStickPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  xJoyStickVal = analogRead(xJoyStickPin);
  

  if (xJoyStickVal < lowZero) {
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    scaledValue = lowZero - xJoyStickVal;

  } else if (xJoyStickVal > highZero) {
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    scaledValue = xJoyStickVal - highZero;

  } else {
    analogWrite(speedPin, 0);
    scaledValue = 0;
  }

  if (scaledValue) {
    mSpeed = (int)((130.0/390.0) * xJoyStickVal + 125);
    analogWrite(speedPin, 255);
  }

  Serial.print("xJoyStickVal = ");
  Serial.print(xJoyStickVal);
  Serial.print(", mSpeed = ");
  Serial.println(mSpeed);

}
