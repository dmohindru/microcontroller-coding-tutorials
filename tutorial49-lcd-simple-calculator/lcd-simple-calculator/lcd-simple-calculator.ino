#include<LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int dt_large = 5000;
int dt_small = 100;
float num1;
float num2;
float result;
String op;


LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Begin LCD
  lcd.begin(16, 2);
  Serial.begin(9600);

}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Mini calculator");
  
  lcd.setCursor(0, 1);
  lcd.print("Enter First Num");
  while(Serial.available()==0);
  num1 = Serial.parseFloat();
  Serial.print("First Number: ");
  Serial.println(num1);
  delay(dt_small);
  
  lcd.setCursor(0, 1);
  lcd.print("Enter Second Num");
  while(Serial.available()==0);
  num2 = Serial.parseFloat();
  Serial.print("Second Number: ");
  Serial.println(num2);
  delay(dt_small);
  
  
  lcd.setCursor(0, 1);
  lcd.print("Enter Operator  ");
  while(Serial.available()==0);
  op = Serial.readString();
  Serial.print("Operator: ");
  Serial.println(op);
  
  if (op == "+") {
    result = num1 + num2;
  } else if (op == "-") {
    result = num1 - num2;
  } else if (op == "/") {
    result = num1 / num2;
  } else if (op == "*") {
    result = num1 * num2;
  } else {
    op = "invalid";
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Result");
  lcd.setCursor(0, 1);
  if (op == "invalid") {
    lcd.print("Invalid Operator");
    Serial.println("Invalid Operator");
  } else {
    lcd.print(num1);
    lcd.print(op);
    lcd.print(num2);
    lcd.print("=");
    lcd.print(result);
    Serial.print("Result: ");
    Serial.println(result);
  }

  delay(dt_large);

  lcd.clear();

}
