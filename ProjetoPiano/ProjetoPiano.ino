int ledPino1 = 3; // Pino em que o Led está conectado
int ledPino2 = 5; // Pino em que o Led está conectado
int ledPino3 = 6; // Pino em que o Led está conectado

int botao1 = 8; // Pino em que o Botão está conectado
int botao2 = 9; // Pino em que o Botão está conectado
int botao3 = 10; // Pino em que o Botão está conectado

int som = 4; // Pino em que o Buzzer está conectado

int estadoBotao1 = 0; // Se o Botão está precionado ou não
int estadoBotao2 = 0; // Se o Botão está precionado ou não
int estadoBotao3 = 0; // Se o Botão está precionado ou não

void setup()
{
  pinMode(ledPino1, OUTPUT); // Pino do Led será de saída
  pinMode(ledPino2, OUTPUT); // Pino do Led será de saída
  pinMode(ledPino3, OUTPUT); // Pino do Led será de saída

  pinMode(botao1, INPUT); // Pino do Led será de entrada
  pinMode(botao2, INPUT); // Pino do Led será de entrada
  pinMode(botao3, INPUT); // Pino do Led será de entrada

  pinMode(som, OUTPUT); //Pino do Buzzer será de saída
}

void loop() 
{
  // Ler o estado do Botão
  // Se está precionado ou não
  estadoBotao1 = digitalRead(botao1);
  estadoBotao2 = digitalRead(botao2);
  estadoBotao3 = digitalRead(botao3);

  // Se o Botão1 for precionado e os outros não o código serã executado
  if(estadoBotao1 && !estadoBotao2 && !estadoBotao3)
  {
    digitalWrite(ledPino1, HIGH); // Ligar o Led
    tone(som, 100); // Liga o Buzzer - '100' Significa a Frequencia que vai tocar o Buzzer
  }

  // Se o Botão2 for precionado e os outros não o código serã executado
  if(estadoBotao2 && !estadoBotao1 && !estadoBotao3)
  {
    digitalWrite(ledPino2, HIGH);
    tone(som, 500);
  }

  // Se o Botão3 for precionado e os outros não o código serã executado
  if(estadoBotao3 && !estadoBotao1 && !estadoBotao2)
  {
    digitalWrite(ledPino3, HIGH);
    tone(som, 1000);
  }

  digitalWrite(ledPino1, LOW); // Desligar Led
  digitalWrite(ledPino2, LOW); // Desligar Led
  digitalWrite(ledPino3, LOW); // Desligar Led
  noTone(som); // Desligar Buzzer
}
