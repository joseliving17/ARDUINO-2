void setup() {
  digitalread(A1,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  delay(1000);
  int TEMPERATURA = -40 + 0.488155 * (analogRead(A1) - 20);
  Serial.print("La termperatura es");
  Serial.print(TEMPERATURA);
  Serial.print("grados");
}
