void setup() {
   pinMode(5,INPUT);
   pinMode(6,OUTPUT);

}

void loop() {
  if(digitalread (5)==HIGH){
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  }
  else{
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(6,LOW);
  delay(500);
  }

}
