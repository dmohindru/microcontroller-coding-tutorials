#include<LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

int triggerPin = 3;
int echoPin = 2;
int pingTravelTime;
int distance;
int dt = 1000;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);  

}

void loop() {
  // hc-sr04 sensor related code 
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
  
  // LCD related code
  // Print distance string on row 0
  lcd.setCursor(0, 0);
  lcd.print("Distance");
  // Print actual distance number on row 1 
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" mm");
  
  delay(dt);
  lcd.clear();

}

