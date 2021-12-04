int firepin=A0;
int buzzerpin=12;
int val=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerpin,OUTPUT);
  pinMode(firepin,INPUT);
  Serial.begin(9600);
}

void loop() {
  val= analogRead(firepin);
  Serial.println(val);
  if (val<100){
    Serial.println("FIREEEE");
    digitalWrite(buzzerpin,HIGH);
    delay(1000);
  }
  digitalWrite(buzzerpin,LOW);
  

}
