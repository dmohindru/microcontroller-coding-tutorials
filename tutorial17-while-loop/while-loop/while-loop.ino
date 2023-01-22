int potPin = A5;
int ledPin = 6;
int potReading;
int threshold = 512; 
//int delayT = 1000;
void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  potReading = analogRead(potPin);
  Serial.println(potReading);
  while (potReading < threshold) {
    digitalWrite(ledPin, HIGH);
    potReading = analogRead(potPin);
    Serial.println(potReading);
  }

  digitalWrite(ledPin, LOW);

  

}
