#include<Servo.h>
Servo myservo;
int pos=0;
int sensorpin=A0;
int sensorval=0;
void setup() {
  myservo.attach(9);
  Serial.begin(9600);

}

void loop() {
  sensorval= analogRead(sensorpin);
  Serial.println(sensorval);
  if(sensorval>300){
    for(pos=0;pos<=180;pos++)
    {
      myservo.write(pos);
      delay(10);
    }
    for(pos=180;pos>=0;pos--)
    {
      myservo.write(pos);
      delay(10);
    }
  }
    
  delay(1000);  
  }
  
  
  
