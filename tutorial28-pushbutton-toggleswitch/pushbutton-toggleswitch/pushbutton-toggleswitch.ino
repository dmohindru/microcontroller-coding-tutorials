int pushButtonPin = 13;
int ledPin = 12;
int buttonOld = 1;
int buttonNew;
int ledState = 0;
int dt = 100;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pushButtonPin, INPUT);

}

void loop() {
  buttonNew = digitalRead(pushButtonPin);
  Serial.println(buttonNew);
  

  if (buttonNew && !buttonOld) {
    ledState = !ledState;
  }
  

  if (ledState) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  buttonOld = buttonNew;
  delay(dt);

}
