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
    Serial.print("Local IP is ");
    Serial.println(WiFi.localIP());
    }

//  IFTTTWebhook hook("cLoJtbpaT5nLHgmILYZ_ua", "notify");
//
//  Serial.println("Triggering webhook");
//
//  hook.trigger();
//
//  Serial.println("Triggered");
  Serial.println("Connecting to host...");
  
  WiFiClientSecure client;

  if(!client.connect("maker.ifttt.com", 443)){
    Serial.println("Failed to connect");
    }else{
    Serial.println("Connected successfully");
    }
  }

void loop(){}
