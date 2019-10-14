#include<ESP8266WiFi.h>
#include<IFTTTWebhook.h>

void setup(){

  Serial.begin(115200);

  Serial.println("Connecting to WiFi...");

  WiFi.disconnect();
  WiFi.begin("lookamee", "supersimple0");

  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(1000);
    }

  if(WiFi.status() == WL_CONNECTED){
    Serial.println("");
    Serial.print("Connected to ");
    Serial.println(WiFi.SSID());
    }

  IFTTTWebhook hook();
  }

void loop(){}
