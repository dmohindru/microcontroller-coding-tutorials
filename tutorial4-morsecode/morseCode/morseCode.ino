int redLED = 8;
// short delay
int dit = 200;
// long delay
int dah = 700;
// message delay
int messDelay = 2000;
// morese code blinking times
int times = 3;

String myName = "Dhruv Mohindru";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // S morse code
  for (int i = 0; i < times; i++) {
    digitalWrite(redLED, HIGH);
    delay(dit);
    digitalWrite(redLED, LOW);
    delay(dit);  
  } 
  
  // O morse code
  for (int i = 0; i < times; i++) {
    digitalWrite(redLED, HIGH);
    delay(dah);
    digitalWrite(redLED, LOW);
    delay(dah);  
  }

  // S morse code
  for (int i = 0; i < times; i++) {
    digitalWrite(redLED, HIGH);
    delay(dit);
    digitalWrite(redLED, LOW);
    delay(dit);  
  }

  // message delay
  delay(messDelay);



}
