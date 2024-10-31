// Pinos Led
const int vermelho = 9;
const int amarelo = 10;
const int verde = 11;

// Tempo Milis pra cada Led
const unsigned long tempoVermelho = 6000;
const unsigned long tempoAmarelo = 2000;
const unsigned long tempoVerde = 2000;

// Variáveis para rastrear o estado atual e o tempo anterior
unsigned long tempoAnterior = 0;
int estadoAtual = 0;

void setup() {
  // Configura os pinos como saídas
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  unsigned long tempoAtual = millis();

  switch (estadoAtual) {
    case 0:  // Fase Vermelha
      if (tempoAtual - tempoAnterior >= tempoVermelho) {
        estadoAtual = 1;  // Muda para a fase Amarela
        tempoAnterior = tempoAtual;
      }
      digitalWrite(vermelho, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(verde, LOW);
      break;

    case 1:  // Fase Amarela
      if (tempoAtual - tempoAnterior >= tempoAmarelo) {
        estadoAtual = 2;  // Muda para a fase Verde
        tempoAnterior = tempoAtual;
      }
      digitalWrite(vermelho, LOW);
      digitalWrite(amarelo, HIGH);
      digitalWrite(verde, LOW);
      break;

    case 2:  // Fase Verde
      if (tempoAtual - tempoAnterior >= tempoVerde) {
        estadoAtual = 3;  // Muda para a fase Amarela
        tempoAnterior = tempoAtual;
      }
      digitalWrite(vermelho, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(verde, HIGH);
      break;

    case 3:  // Fase Amarela antes de voltar ao Vermelho
      if (tempoAtual - tempoAnterior >= tempoAmarelo) {
        estadoAtual = 0;  // Retorna para a fase Vermelha
        tempoAnterior = tempoAtual;
      }
      digitalWrite(vermelho, LOW);
      digitalWrite(amarelo, HIGH);
      digitalWrite(verde, LOW);
      break;
  }
}
