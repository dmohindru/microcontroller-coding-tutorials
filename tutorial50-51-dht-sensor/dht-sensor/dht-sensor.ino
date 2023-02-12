#include <DHT.h>
#define Type DHT11
// Note need to install this library to run this example
// https://www.arduinolibraries.info/libraries/dht-sensor-library

int sensePin = 2;
DHT HT(sensePin, Type);
float humidity;
float tempC;
float tempF;
int setTime=500;

void setup() {
  Serial.begin(9600);
  HT.begin();
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
  delay(setTime);

}
