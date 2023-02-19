int triggerPin = 12;
int echoPin = 11;
int pingTravelTime;
int distance;

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);  

}
/*
Idea behind serial plotter is print comma seperated values on serial monitor
It will plot those values on a scale. Say for example if we print 
0,200,400
on serial monitor it will plot three value on serial plotter
1. First one at y value of 0
2. Second at y value of 200
3. Third at y value of 400
*/

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
  Serial.print(0);
  Serial.print(",");
  Serial.print(distance);
  Serial.print(",");
  Serial.println(400);
  delay(25);

}

