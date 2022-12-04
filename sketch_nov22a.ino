String cdata; 
String textMessage;
int command;

int led = 5;
 
const int TRIG_PIN = 16; // Arduino pin connected to Ultrasonic Sensor's TRIG pin
const int ECHO_PIN = 17; // Arduino pin connected to Ultrasonic Sensor's ECHO pin
float duration_us, distance_cm;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
 digitalWrite(led, LOW);

 
  pinMode(TRIG_PIN, OUTPUT); // set arduino pin to output mode
  pinMode(ECHO_PIN, INPUT);  // set arduino pin to input mode
}

void loop() {
   // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // measure duration of pulse from ECHO pin
  duration_us = pulseIn(ECHO_PIN, HIGH);
  // calculate the distance
  distance_cm = 0.017 * duration_us;
  
  
  
  // print the value to Serial Monitor
  //Serial.print("distance: ");
  //Serial.print(distance_cm);
  //Serial.println(" cm");
  
  //Serial.println(a);
  delay(500);
  
  int sdata1 = digitalRead(19);        //IR SENSOR
  //Serial.println(sdata1); 
  

  if(sdata1 == 1)   
  {

      Serial.print("ON ");
     
    }
    else
    {
      Serial.print("OFF");
      }
  delay(100);
  int sdata2 = round(distance_cm);    //ULTRASOUND SENSOR
  //Serial.println(sdata2); 
  if(sdata2 <= 5)   
  {

      Serial.print("HIGH");
     
    }
    else
    {
      Serial.print("LOW ");
      }
  
   
   delay(1000);
   cdata = ""; 
   
  delay(1000);
  
}
