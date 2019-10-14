#include<ESP8266WiFi.h>

String deviceId = "v6384AFE3CE54F56";

void setup(){

  Serial.begin(115200);

  Serial.println("Connecting to WiFi...");

  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
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

  Serial.println("Connecting to host...");
  
  WiFiClient client;

  if(!client.connect("api.pushingbox.com", 80)){
    Serial.println("Failed to connect");
    }else{
    Serial.println("Connected successfully");

    String postStr = "devid=";
    postStr += deviceId;
    postStr += "\r\n\r\n";

    Serial.println("Sending data...");

    client.print("POST /pushingbox HTTP/1.1\n");
    client.print("Host: api.pushingbox.com\n");
    client.print("Connection: close\n");
    client.print("Content-type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(postStr.length());
    client.print("\n\n");
    client.print(postStr);
    }
  client.stop();
  Serial.println("Client Stopped");
  }

void loop(){
  }
