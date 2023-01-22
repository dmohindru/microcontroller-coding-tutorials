int lightPin = A0;
int buzzPin = 13;
int lightVal;
int dv=250;
int buzzTime;

void setup() {
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);
  buzzTime = ((int)(10000.0/1023.0)) * lightVal;
  
  

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzTime);

}
