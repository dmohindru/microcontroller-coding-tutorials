int pushButtonPin = 13;
int ledPin = 12;
int buttonRead;
int dt = 100;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(pushButtonPin, INPUT);

}

void loop() {
  buttonRead = digitalRead(pushButtonPin);
  Serial.println(buttonRead);
  delay(dt);

  if (!buttonRead) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
