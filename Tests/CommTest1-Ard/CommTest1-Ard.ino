#include<SoftwareSerial.h>

SoftwareSerial toESP(7, 8); //rx, tx

int value;

void setup() {
  toESP.begin(9600);
  value = 123;
}

void loop() {
  toESP.print(String(value));
  toESP.flush();
  delay(120000);
}
