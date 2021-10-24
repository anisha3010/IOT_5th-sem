int char_=0;
void setup() {
  
  Serial.begin(9600);

}

void loop() {
  if (Serial.available>0)
  {
    char_= Serial.read();
    Serial.print("i recieved: ");
    Serial.println(char_);
  }

}
