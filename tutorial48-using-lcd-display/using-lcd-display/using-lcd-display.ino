#include<LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int dt_large = 1000;
int dt_small = 500;



void setup() {
  // Begin LCD
  lcd.begin(16, 2);

}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Watch me Count");
  lcd.setCursor(0, 1);
  for (int j=1; j<=10;j++) {
    lcd.setCursor(0, 1);
    lcd.print(j);
    delay(dt_small);
  }
  //delay(dt_large);
  lcd.clear();

}
