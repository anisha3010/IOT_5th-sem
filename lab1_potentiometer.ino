int analogIn=0;
int analogOut=11;
int sensorVal=0;
int outputVal=0;
void setup() 
{
  pinMode(analogOut,OUTPUT);
  pinMode(analogIn,INPUT);
  Serial.begin(9600);

}

void loop() 
{
  sensorVal= analogRead(analogIn);
  outputVal= map(sensorVal,0,1023,0,255);
  analogWrite(analogOut,outputVal);
  Serial.println("sensor val");
  Serial.println(sensorVal);
  Serial.println("output val");
  Serial.println(outputVal);
  delay(50);
}
