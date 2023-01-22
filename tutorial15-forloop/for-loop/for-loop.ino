int whitePin = 6;
int greenPin = 9;
int whitePinCount = 3;
int greenPinCount = 5;
int delayT = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(whitePin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < whitePinCount; i++) {
    digitalWrite(whitePin, HIGH);
    delay(delayT);
    digitalWrite(whitePin, LOW);
    delay(delayT);
  }

  for (int i = 0; i < greenPinCount; i++) {
    digitalWrite(greenPin, HIGH);
    delay(delayT);
    digitalWrite(greenPin, LOW);
    delay(delayT);
  }

}
