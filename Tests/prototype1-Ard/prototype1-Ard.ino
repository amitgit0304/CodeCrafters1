#include<LiquidCrystal.h>

const int pulsePin = A0;
const int rs = 2, en = 3, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
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

  delay(10);
  
}
