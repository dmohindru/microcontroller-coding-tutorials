double sinAngle, cosAngle, angle;
void setup() {
  Serial.begin(9600);


}

void loop() {
  
  for (double i = 0; i <= 2*3.14159265; i+=0.01) {
    //angle = i * 3.14 / 180.0;

    sinAngle = sin(i);
    cosAngle = cos(i);
    Serial.print(1);
    Serial.print(",");
    Serial.print(sinAngle);
    Serial.print(",");
    Serial.print(cosAngle);
    Serial.print(",");
    Serial.println(-1);
    delay(25);
  }

}
