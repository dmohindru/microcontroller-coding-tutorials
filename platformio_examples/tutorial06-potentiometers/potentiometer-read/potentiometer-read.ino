int myVoltPin = A2;
int readVal;
float V2;
int waitT = 1000;
void setup() {
  // put your setup code here, to run once:
  // pinMode(myVoltPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myVoltPin);
  V2 = (5./1023.0)*readVal;
  Serial.print("readVal = ");
  Serial.print(readVal);
  Serial.print(", V2 = ");
  Serial.println(V2);
  delay(waitT);

}
