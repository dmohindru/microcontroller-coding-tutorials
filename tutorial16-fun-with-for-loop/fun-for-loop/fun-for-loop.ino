int j;
int delayTime=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  for (j=2;j<=10;j+=2){
    Serial.println(j);
    delay(delayTime);
  }
  Serial.println();

}
