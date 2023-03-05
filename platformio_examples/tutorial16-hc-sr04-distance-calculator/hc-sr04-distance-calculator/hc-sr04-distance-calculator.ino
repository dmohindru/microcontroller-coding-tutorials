int triggerPin = 12;
int echoPin = 11;
int pingTravelTime;
int distance;

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
  // Speed of sound is 343 meter/second
  // which is equivelant 0.343 mm/microseconds
  distance = 0.343 * pingTravelTime / 2.0;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" mm");
  delay(25);

}

