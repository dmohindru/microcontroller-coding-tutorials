int buzzPin = 8;
int buzzTime;
int potPin = A0;
int potReading;
void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);

}


void loop() {
  potReading = analogRead(potPin);
  buzzTime = ((int)(9940.0/1023.0)) * potReading + 60;

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzTime);

}
