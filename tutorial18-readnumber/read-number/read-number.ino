int numBlinks;
String msg = "How many blinks do you need: ";
int delayT = 500;
int ledPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  Serial.println(msg);
  while (Serial.available() == 0){}

  numBlinks = Serial.parseInt();
  for (int i = 0; i < numBlinks; i++) {
    digitalWrite(ledPin, HIGH);
    delay(delayT);
    digitalWrite(ledPin, LOW);
    delay(delayT);
  }
}
