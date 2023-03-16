void setup() {
  Serial.begin(9600);
  DDRA = B00001111;
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  byte valor1 = PINA;
  PORTA = B00001010;
  byte valor2 = PINA;
  byte valor3 = PORTA;
  digitalWrite(2, HIGH);
  delay(10);
  byte valor4 = PINA;
  byte valor5 = PORTA;
  Serial.print("(PIN) Valor lido sem modificações: "); Serial.print(valor1, BIN); Serial.println("");
  Serial.print("(PIN) Valor lido colocando 2 portas de saida como HIGH: "); Serial.print(valor2, BIN); Serial.println("");
  Serial.print("(PORT) Valor lido das portas: "); Serial.print(valor3, BIN); Serial.println("");
  Serial.print("(PIN)Valor lido com uma das portas de entrada com sinal HIGH: "); Serial.print(valor4, BIN); Serial.println("");
  Serial.print("(PORT)Valor lido com uma das portas de entrada com sinal HIGH: "); Serial.print(valor5, BIN); Serial.println("");
}

void loop() {
}
