#include<LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

int pushButtonPin = 4;
int pushButtonVal;

int triggerPin = 3;
int echoPin = 2;
int pingTravelTime;
int dt = 1000;
int times = 100;
double accVal, distance;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pushButtonPin, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  digitalWrite(pushButtonPin, HIGH);  

}

void loop() {
    
  pushButtonVal = digitalRead(pushButtonPin);
  if (!pushButtonVal) {
    accVal = 0;
    lcd.clear();
    // lcd.setCursor(0, 0);
    // lcd.print("Calculating...");
    for (int i = 0; i < times; i++) {
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
      accVal+= distance;

    }

    // lcd.clear();
    distance = accVal / times;
    
    // LCD related code
    // Print distance string on row 0
    lcd.setCursor(0, 0);
    lcd.print("Distance");
    // Print actual distance number on row 1 
    lcd.setCursor(0, 1);
    lcd.print(distance);
    lcd.print(" mm");
  
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" mm");

    delay(dt);
    lcd.clear();
    
  } else {
    lcd.setCursor(0, 0);
    lcd.print("Distance");
    lcd.setCursor(0, 1);
    lcd.print("Not measured");
    delay(dt);
    lcd.clear();
  }

}

