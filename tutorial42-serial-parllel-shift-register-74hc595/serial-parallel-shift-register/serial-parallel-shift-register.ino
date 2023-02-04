int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
byte firstLEDs=0b10101010;
byte secondLEDs=0b01010101;
int dt = 500;
void setup() {
  Serial.begin(9600);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);

}

void loop() {

  // set latchPin low to trigger data incoming
  digitalWrite(latchPin, LOW);
  // LSBFIRST makes Q7 pin as LSB and Q0 as MSB
  // MSBFIRST makes Q0 pin as LSB and Q7 as MSB
  shiftOut(dataPin, clockPin, LSBFIRST, firstLEDs);
  digitalWrite(latchPin, HIGH);
  delay(dt);
  digitalWrite(latchPin, LOW);
  // LSBFIRST makes Q7 pin as LSB and Q0 as MSB
  // MSBFIRST makes Q0 pin as LSB and Q7 as MSB
  shiftOut(dataPin, clockPin, LSBFIRST, secondLEDs);
  digitalWrite(latchPin, HIGH);
  delay(dt);
  

}
