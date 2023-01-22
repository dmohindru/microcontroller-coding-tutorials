int redPin = 6;
int greenPin = 9;
int bluePin = 10;
String myColor;
String strRed = "red";
String strGreen = "green";
String strBlue = "blue";
String strYellow = "yellow";
String strCyan = "cyan";
String strMagenta = "magenta";
String strWhite = "white";
String msg = "Enter color of LED (red|green|blue|yellow|cyan|magenta|white): ";
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
  } else if (myColor == strYellow) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 100);
    analogWrite(bluePin, 0);
  } else if (myColor == strCyan) {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 255);
  } else if (myColor == strMagenta) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 100);
  } else if (myColor == strWhite) {
    analogWrite(redPin, 100);
    analogWrite(greenPin, 100);
    analogWrite(bluePin, 100);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    
    Serial.println("INVALID CHOICE");

  }

}
