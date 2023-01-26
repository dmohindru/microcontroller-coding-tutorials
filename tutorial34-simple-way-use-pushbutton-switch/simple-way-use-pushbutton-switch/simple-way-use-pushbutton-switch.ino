
int buttonPin = 2;
int buttonValue;
int dt = 100;
void setup() {
  pinMode(buttonPin, INPUT);
  // Essentially below line of code is working as pull up resistor
  // Here we are using internal pull up resistors
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  buttonValue = digitalRead(buttonPin);
  Serial.print("You button is: ");
  Serial.println(buttonValue);
  delay(dt);
}
