int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int upSpeedBtnPin = 8;
int downSpeedBtnPin = 9;
int mSpeed, counter = 0;
int step = 15;
int upBtnOld = 1, upBtnNew;
int downBtnOld = 1, downBtnNew;
void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(upSpeedBtnPin, INPUT);
  pinMode(downSpeedBtnPin, INPUT);
  // Enable pull up registers
  digitalWrite(upSpeedBtnPin, HIGH);
  digitalWrite(downSpeedBtnPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  upBtnNew = digitalRead(upSpeedBtnPin);
  downBtnNew = digitalRead(downSpeedBtnPin);

  if (!upBtnNew && upBtnOld && counter < 255) {
    counter += step;
  }

  if (!downBtnNew && downBtnOld && counter > -255) {
    counter -= step;
  }

  if (counter < 0) {
    mSpeed = counter * -1;
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    analogWrite(speedPin, mSpeed);

  } else if (counter > 0) {
    mSpeed = counter;
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    analogWrite(speedPin, mSpeed);

  }
  
  
  Serial.print("mSpeed = ");
  Serial.print(mSpeed);
  Serial.print(", counter = ");
  Serial.println(counter);

  upBtnOld = upBtnNew;
  downBtnOld = downBtnNew;

}
