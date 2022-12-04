void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0 )
  {
      String data = Serial.readString();
      Serial.println(data);
      delay(50);
      Serial.println(data.substring(0,3));
      
      if(data.substring(0,3) == "ON ")
      {
        Serial.println("goAhead");
      }
      else{
        Serial.println("goBack");
      }
      Serial.println(data.substring(3,7));
      if(data.substring(3,7) == "LOW ")
      {
        Serial.println("send sms");
      }
      else
      {
        Serial.println("no sms");
      }
  }
}
