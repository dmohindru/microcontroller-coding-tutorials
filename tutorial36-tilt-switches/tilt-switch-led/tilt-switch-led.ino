int tiltPin = 2;
int okLed = 3;
int notOkLed = 4;
int tiltVal;

void setup() {
  pinMode(tiltPin, INPUT);
  pinMode(okLed, OUTPUT);
  pinMode(notOkLed, OUTPUT);
  digitalWrite(tiltPin, HIGH);
  Serial.begin(9600);

}

void loop() {
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if (!tiltVal) {
    digitalWrite(okLed, HIGH);
    digitalWrite(notOkLed, LOW);
  } else {
    digitalWrite(okLed, LOW);
    digitalWrite(notOkLed, HIGH);
  }
  
}
