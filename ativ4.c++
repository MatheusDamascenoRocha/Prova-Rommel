
const int pinoSensorLuz = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorLuz = analogRead(pinoSensorLuz);
  
  Serial.print("Valor da luz: ");
  Serial.println(valorLuz);
  
  for (int i = 0; i < 1000; i++) {
    delay(1);
  }
}