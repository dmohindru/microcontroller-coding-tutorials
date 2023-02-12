#include <DHT.h>
#include<LiquidCrystal.h>
#define Type DHT11
// Note need to install this library to run this example
// https://www.arduinolibraries.info/libraries/dht-sensor-library
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int sensePin = 2;


float humidity;
float tempC;
float tempF;
int setTime=2000;

DHT HT(sensePin, Type);
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  HT.begin();
   lcd.begin(16, 2);
  delay(setTime);

}

void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);
  Serial.print("Humidity = ");
  Serial.print(humidity);
  Serial.print(", tempC = ");
  Serial.print(tempC);
  Serial.print(", tempF = ");
  Serial.println(tempF);
  // Print first line of humidity
  lcd.setCursor(0, 0);
  lcd.print("Humidity=");
  lcd.print(humidity);
  // Print second line of temprature
  lcd.setCursor(0, 1);
  lcd.print("tC=");
  lcd.print(tempC);
  lcd.print(",tF=");
  lcd.print(tempF);
  
  
  delay(setTime);
  lcd.clear();

}
