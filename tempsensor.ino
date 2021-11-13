int outpin=0;
void setup()
 
{
  Serial.begin(9600);

}

void loop() {
  int rawvoltage=analogRead(outpin);
  float milli= (rawvoltage/1024.0)*5000;
  float cel= milli/10;
  Serial.print(cel);
  Serial.print(" degree celsius, ");
  Serial.print((cel*9)/5 + 32);
  Serial.print(" degree fahreheit");
  delay(1000);
  
  

}
