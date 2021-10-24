int inpin=2;
int outpin=13;
int val=0;int count=0;


void setup() {
  pinMode(inpin,INPUT);
  pinMode(outpin,OUTPUT);
  
  Serial.begin(9600); //specific to arduino uno
}

void loop() 
{
  val =digitalRead(inpin);
 
  if (val==HIGH)
  {digitalWrite(outpin,HIGH);
  count++;
  Serial.print(count);}
  else
  digitalWrite(outpin,LOW);
  
  
  
}
