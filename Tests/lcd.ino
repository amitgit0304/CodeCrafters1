#include <LiquidCrystal.h>

const int rs = 0, en = 1, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}
void loop() {
lcd.setCursor(0, 0); 
lcd.print("Heart Rate :");//print name

lcd.setCursor(0,1);

lcd.print("124");//print name

delay(750);//delay of 0.75sec

//lcd.scrollDisplayLeft();//shifting data on LCD
//
//lcd.setCursor(0, 0);// set the cursor to column 0, line1
}
