int redLed = 12;
int greenLed = 11;
int whiteLed = 10;
String msg = "Enter LED color to glow (red|green|white): ";
String ledColor;
String strRed = "red";
String strGreen = "green";
String strWhite = "white";
void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);

}

void loop() {
  Serial.println(msg);

  while (Serial.available() == 0);

  ledColor = Serial.readString();

  if (ledColor == strRed) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    digitalWrite(whiteLed, LOW);
  } else if (ledColor == strGreen) {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    digitalWrite(whiteLed, LOW);
  } else if (ledColor == strWhite) {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(whiteLed, HIGH);
  } else {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(whiteLed, LOW);
    Serial.println("INVALID CHOICE !!!!");
  }

}
