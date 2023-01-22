int redPin = 8;
int greenPin = 9;
int bluePin = 10;
String myColor;
String strRed = "red";
String strGreen = "green";
String strBlue = "blue";
String strAqua = "aqua";
String msg = "Enter color of LED (red|green|blue|aqua): ";
void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  Serial.println(msg);

  while (Serial.available() == 0);

  myColor = Serial.readString();

  if (myColor == strRed) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  } else if (myColor == strGreen) {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  } else if (myColor == strBlue) {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  } else if (myColor == strAqua) {
    digitalWrite(redPin, LOW);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 80);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    
    Serial.println("INVALID CHOICE");

  }

}
