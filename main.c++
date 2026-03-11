const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;
const int botao4 = 5;
const int pinoLED = 13;

void setup() {
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  int estado1 = digitalRead(botao1);
  int estado2 = digitalRead(botao2);
  int estado3 = digitalRead(botao3);
  int estado4 = digitalRead(botao4);

  if (estado1 == HIGH || estado2 == HIGH || estado3 == HIGH || estado4 == HIGH) {
    digitalWrite(pinoLED, HIGH);
  } else {
    digitalWrite(pinoLED, LOW);
  }
}
