int redPin = 9;
int bright = 5;
int step = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);

}

void loop() {
  // value between 0 - 255
  // 0 = 0 Volts
  // 255 = 5 Volts
  bright = 5;
  analogWrite(redPin, bright);
  // Increase step
  delay(2000);
  bright += step;
  analogWrite(redPin, bright);
  // Increase step
  delay(2000);
  bright += step;
  analogWrite(redPin, bright);
  // Increase step
  delay(2000);
  bright += step;
  analogWrite(redPin, bright);
  // Increase step
  delay(2000);
  bright += step;
  analogWrite(redPin, bright);

}
