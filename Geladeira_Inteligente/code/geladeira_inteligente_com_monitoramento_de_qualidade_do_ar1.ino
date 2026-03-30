const int pinTemp = A0;
const int pinGas = A1;
const int pinBotao = 2;

const int ledR = 9;
const int ledG = 10;
const int ledB = 11;

float temperatura = 0;
int valorGas = 0;

bool portaAberta = false;
unsigned long tempoAbertura = 0;
const int tempoLimite = 500; 

void setup() {
  pinMode(pinBotao, INPUT_PULLUP); // CORREÇÃO

  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);

  Serial.begin(9600);
}
void setColor(int r, int g, int b) {
  analogWrite(ledR, r);
  analogWrite(ledG, g);
  analogWrite(ledB, b);
}

void loop() {
 
  int leituraTemp = analogRead(pinTemp);
  float voltagem = leituraTemp * 5.0 / 1023.0;
  temperatura = (voltagem - 0.5) * 100;
  valorGas = analogRead(pinGas);

  int estadoBotao = digitalRead(pinBotao);

  if (estadoBotao == LOW) {
    if (!portaAberta) {
      portaAberta = true;
      tempoAbertura = millis();
    }
  } else {
    portaAberta = false;
  }

  if (temperatura > 30 || valorGas > 600) { 
    setColor(255, 0, 0); // vermelho
  }
  else if (portaAberta && (millis() - tempoAbertura > tempoLimite)) {
    setColor(255, 255, 0); // amarelo
  }
  else {
    setColor(0, 255, 0); // verde
  }

  Serial.print("Temp: ");
  Serial.print(temperatura);
  Serial.print(" | Gas: ");
  Serial.print(valorGas);
  Serial.print(" | Porta: ");
  Serial.println(portaAberta);

  delay(200);
}