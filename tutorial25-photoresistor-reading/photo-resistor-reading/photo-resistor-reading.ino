int lightPin = A0;
int lightVal;
int dv=250;
int redPin = 13;
int greenPin = 12;
void setup() {
  pinMode(lightPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);
  if (lightVal > 600) {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  } else {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }

}
