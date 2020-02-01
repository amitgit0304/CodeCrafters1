#include<LiquidCrystal.h>

const int pulsePin = A0;
const int rs = 7, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);

  while(!Serial){
  }
  delay(10);
  
  lcd.begin(16, 2);

}
void loop() {
  int reading = analogRead(pulsePin);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(reading);
  
  Serial.println(reading);

  delay(100);
  
}
