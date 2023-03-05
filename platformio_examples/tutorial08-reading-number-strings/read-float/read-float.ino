float radius;
float pi = 3.14;
float area;
String msg = "Enter radius: ";
String msg1 = "Area of circle: ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(msg);
  while (Serial.available() == 0){}
  radius = Serial.parseFloat();
  area = pi * radius * radius;
  Serial.print(msg1);
  Serial.println(area);
}
