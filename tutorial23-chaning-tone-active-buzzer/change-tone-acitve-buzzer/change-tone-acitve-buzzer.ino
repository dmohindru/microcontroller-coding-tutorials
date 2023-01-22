int potPin = A0;
int buzzPin = 8;
int potReading;


void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop() {

  potReading = analogRead(potPin);
  Serial.println(potReading);

  if (potReading > 1000) {
    digitalWrite(buzzPin, HIGH);
  } else {
    digitalWrite(buzzPin, LOW);
  }

}
