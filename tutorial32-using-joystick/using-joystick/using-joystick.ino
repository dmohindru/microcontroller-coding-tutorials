int xPin = A0;
int yPin = A1;
int switchPin = 2;
int xVal, yVal, switchVal;
int dt = 250;
void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);

}

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);

  delay(dt);
  Serial.print("X Value = ");
  Serial.print(xVal);
  Serial.print(", Y value = ");
  Serial.print(yVal);
  Serial.print(", Switch State is ");
  Serial.println(switchVal);


}
