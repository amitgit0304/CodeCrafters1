int lastVal = 0;
int currVal = 0;
int lastDif = 0;
int currDif = 0;

void setup() {
  Serial.begin(9600);
  lastVal = 0;
  currVal = 0;
  lastDif = 0;
  currDif = 0;
}

void loop() {
  lastVal = currVal;
  currVal = analogRead(A0);
  currDif = currVal-lastVal;
  if(currDif>5)
    if((currDif-lastDif)>0)
      Serial.println((currDif-lastDif));
    else
      Serial.println(0);
  else
    Serial.println(0);
  delay(100);
}
