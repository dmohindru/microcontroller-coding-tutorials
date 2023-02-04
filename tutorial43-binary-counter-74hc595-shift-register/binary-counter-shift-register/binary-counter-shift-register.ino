int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
byte counter=0x00;

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
  shiftOut(dataPin, clockPin, LSBFIRST, counter++);
  digitalWrite(latchPin, HIGH);
  delay(dt);

  

}
