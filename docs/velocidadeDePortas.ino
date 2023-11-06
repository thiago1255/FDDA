void setup() {
Serial.begin(9600);
unsigned long comeco;
unsigned long fim;
pinMode(22, OUTPUT);

comeco = micros();
PORTA = B00000001;
PORTA = B00000000;
PORTA = B00000001;
PORTA = B00000000;

PORTA = B00000001;
PORTA = B00000000;
PORTA = B00000001;
PORTA = B00000000;

PORTA = B00000001;
PORTA = B00000000;
PORTA = B00000001;
PORTA = B00000000;

PORTA = B00000001;
PORTA = B00000000;
PORTA = B00000001;
PORTA = B00000000;

PORTA = B00000001;
PORTA = B00000000;
PORTA = B00000001;
PORTA = B00000000;

PORTA = B00000001;
PORTA = B00000000;
PORTA = B00000001;
PORTA = B00000000;

PORTA = B00000001;
PORTA = B00000000;
PORTA = B00000001;
PORTA = B00000000;
fim = micros();
unsigned long portasSemLoop = fim - comeco;

comeco = micros();
digitalWrite(22, HIGH);
digitalWrite(22, LOW);
digitalWrite(22, HIGH);
digitalWrite(22, LOW);

digitalWrite(22, HIGH);
digitalWrite(22, LOW);
digitalWrite(22, HIGH);
digitalWrite(22, LOW);

digitalWrite(22, HIGH);
digitalWrite(22, LOW);
digitalWrite(22, HIGH);
digitalWrite(22, LOW);

digitalWrite(22, HIGH);
digitalWrite(22, LOW);
digitalWrite(22, HIGH);
digitalWrite(22, LOW);

digitalWrite(22, HIGH);
digitalWrite(22, LOW);
digitalWrite(22, HIGH);
digitalWrite(22, LOW);

digitalWrite(22, HIGH);
digitalWrite(22, LOW);
digitalWrite(22, HIGH);
digitalWrite(22, LOW);

digitalWrite(22, HIGH);
digitalWrite(22, LOW);
digitalWrite(22, HIGH);
digitalWrite(22, LOW);
fim = micros();
unsigned long digitalSemLoop = fim - comeco;

comeco = micros();
for (int i = 0; i < 14; i++) {
  PORTA = B00000001;
  PORTA = B00000000;
}
fim = micros();
unsigned long portasComLoop = fim - comeco;

comeco = micros();
for (int i = 0; i < 14; i++) {
  digitalWrite(22, HIGH);
  digitalWrite(22, LOW);
}
fim = micros();
unsigned long digitalComLoop = fim - comeco;

Serial.println("Microsegundos calculados:");
Serial.println(portasSemLoop);
Serial.println(digitalSemLoop);
Serial.println(portasComLoop);
Serial.println(digitalComLoop);
}

void loop() {
}
