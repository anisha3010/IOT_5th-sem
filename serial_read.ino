int char=0;
void setup() {
  
  Serial.begin(9600);

}

void loop() {
  if (Serial.available>0)
  {
    char= Serial.read();
    Serial.print("i recieved: ");
    Serial.println(char);
  }

}
