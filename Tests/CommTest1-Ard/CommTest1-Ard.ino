#include<SoftwareSerial.h>

SoftwareSerial toESP(7, 8); //rx, tx

void setup() {
  toESP.begin(9600);
}

void loop() {
  toESP.print("777");
  toESP.flush();
  delay(30000);
}
