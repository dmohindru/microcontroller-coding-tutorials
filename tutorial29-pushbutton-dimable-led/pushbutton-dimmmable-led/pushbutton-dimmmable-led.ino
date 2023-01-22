int upTogglePin = 13;
int downTogglePin = 12;
int ledPin = 11;
int steps = 10;

int currentStep = 0, upToggleButtonNew, upToggleButtonOld = 1, 
downToggleButtonNew, downToggleButtonOld = 1, ledIntensity = 0;
int dt = 100;

void setup() {
  pinMode(upTogglePin, INPUT);
  pinMode(downTogglePin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  upToggleButtonNew = digitalRead(upTogglePin);
  downToggleButtonNew = digitalRead(downTogglePin);

  // Serial.print("upToggleButton: ");
  // Serial.println(upToggleButton);
  // Serial.print("downToggleButton: ");
  // Serial.println(downToggleButton);

  if (upToggleButtonNew && !upToggleButtonOld && (currentStep < steps)) {
    currentStep++;
  }

  if (downToggleButtonNew && !downToggleButtonOld && (currentStep > 0)) {
    currentStep--;
  }
  ledIntensity = (int)(255 * ((double)currentStep/steps));
  
  // Serial.print("currentStep: ");
  // Serial.println(currentStep);
  // Serial.print("ledIntensity: ");
  // Serial.println(ledIntensity);

  analogWrite(ledPin, ledIntensity);
  

  upToggleButtonOld = upToggleButtonNew;
  downToggleButtonOld = downToggleButtonNew;
  delay(dt);
  

}
