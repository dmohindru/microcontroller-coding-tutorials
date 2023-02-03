//byte myByte=0;
// byte myByte=B00001000;
byte myByte=0x00;
int dt = 1500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  Serial.print(myByte, DEC);
  Serial.print("  ");
  Serial.print(myByte, BIN);
  Serial.print("  ");
  Serial.println(myByte, HEX);
  delay(dt);
  myByte++;

}
