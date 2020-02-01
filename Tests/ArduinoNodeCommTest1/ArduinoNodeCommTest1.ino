#include<SoftwareSerial.h>

SoftwareSerial serial(10, 11); //rx, tx

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  while(!Serial);

  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Sending...");
  serial.write(millis());
  delay(500);
}
