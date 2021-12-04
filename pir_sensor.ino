int calTime=30;
int lowin;
int pause=5000;
boolean locklow=true;
boolean takelowtime;
int pirpin=3;
int ledpin=13;
void setup() {
  Serial.begin(9600);
  pinMode(pirpin,INPUT);
  pinMode(ledpin,OUTPUT);
  digitalWrite(pirpin,LOW);
  Serial.println("calibrating sensor");
  for(int i=0;i<calTime;i++)
  {
    Serial.print(".");
    delay(1000);
  }
    Serial.println("  done:SENSOR ACTIVE");
    delay(50);
  

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(pirpin)==HIGH){
  digitalWrite(ledpin,HIGH);
  if(locklow)
  {
    locklow=false;
    Serial.println("----");
    Serial.println("Motion detected at");
    Serial.println(millis()/1000);
    Serial.println("Seconds");
    delay(50);
  }
  takelowtime=true;
}
if(digitalRead(pirpin)==LOW){
  if(takelowtime){
    lowin=millis();
    takelowtime=false;}
    if(!locklow && millis()-lowin>pause){
      digitalWrite(ledpin,LOW);
      locklow=true;
      Serial.println("Motion ended at ");
      Serial.println(lowin/1000);
      Serial.println("Seconds");
      delay(50);
    }
}
}
