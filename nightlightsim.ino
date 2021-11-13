int lightsen=80;
int val=0;
void setup()

{
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(A0);
  Serial.println(val);
  
  if(val>=lightsen)
  digitalWrite(13,LOW);
  else
  digitalWrite(13,HIGH);
  delay(1000);

}
