int voltPin = A2;
int readVal;
float V2;
int waitT = 1000;
int redLed = 11;
int yellowLed = 10;
int greenLed = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(voltPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(voltPin);
  V2 = (5.0/1023.0) * readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);

  if (V2 > 4.0) {
    digitalWrite(redLed, HIGH);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, LOW);
  }

  if (V2 < 4.0 && V2 > 3.0) {
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(greenLed, LOW);
  }

  if (V2 < 3.0) {
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
  }
  
  
  delay(waitT);

}
