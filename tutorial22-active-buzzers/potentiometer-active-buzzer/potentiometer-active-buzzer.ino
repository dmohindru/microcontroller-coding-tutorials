
int buzzPin = 8;
int delayTime1 = 1;
int delayTime2 = 2;


void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() {

  for (int j = 0; j < 100; j++) {
    digitalWrite(buzzPin, HIGH);
    delay(delayTime1);
    digitalWrite(buzzPin, LOW);
    delay(delayTime1);
  }

  for (int j = 0; j < 100; j++) {
    digitalWrite(buzzPin, HIGH);
    delay(delayTime2);
    digitalWrite(buzzPin, LOW);
    delay(delayTime2);
  }
  

}
