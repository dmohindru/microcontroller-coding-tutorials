int triggerPin = 12;
int echoPin = 11;
int pingTravelTime;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);  

}

void loop() {
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  // Ping travel time is in microseconds
  pingTravelTime = pulseIn(echoPin, HIGH);
  Serial.println(pingTravelTime);
  delay(25);

}
