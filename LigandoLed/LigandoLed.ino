const int ledPin = 3; // Pino que o led esta conectado
const int botao = 2; // Pino que o botão está conectado

int estadoBotao = 0; // Estado do botão

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  estadoBotao = digitalRead(botao);

  if(estadoBotao == HIGH) // Se o botao for pressionado Acende
  {
    digitalWrite(ledPin, HIGH); // Acende led
    delay(2000);
  }

  else
  {
    digitalWrite(ledPin, LOW); // Apaga led
  }
}

