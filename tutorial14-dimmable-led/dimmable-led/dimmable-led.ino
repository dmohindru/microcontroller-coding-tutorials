int voltPin = A1;
int ledPin = 6;
int delayT = 100;
int readVal;
int writeVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(voltPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(voltPin);
  Serial.print("Potentiometer reading: ");
  Serial.println(readVal);

  writeVal = (int)((255.0/1023.0) * readVal);

  Serial.print("PWM write value ");
  Serial.println(writeVal);

  analogWrite(ledPin, writeVal);
  //delay(delayT);
  

}
