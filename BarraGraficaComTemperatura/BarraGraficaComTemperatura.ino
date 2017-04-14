const int sensor = 0;
float temperatura = 0;
int adc = 0;

const int som = 12;

const int led[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() 
{
  analogReference(INTERNAL);
  pinMode(som, OUTPUT);
  for(int i = 0; i < 10; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void loop() 
{
  adc = analogReference(sensor);
  temperatura = adc * 0.1075268817204301;

  if(temperatura > 23.50)
  {
    digitalWrite(led[0], HIGH);
  }

  else
  {
    digitalWrite(led[0], LOW);
  }

  if(temperatura > 24.00)
  {
    digitalWrite(led[1], HIGH);
  }

  else
  {
    digitalWrite(led[1], LOW);
  }

  if(temperatura > 24.50)
  {
    digitalWrite(led[2], HIGH);
  }

  else
  {
    digitalWrite(led[2], LOW);
  }

  if(temperatura > 25.00)
  {
    digitalWrite(led[3], HIGH);
  }

  else
  {
    digitalWrite(led[3], LOW);
  }

  if(temperatura > 25.50)
  {
    digitalWrite(led[4], HIGH);
  }

  else
  {
    digitalWrite(led[4], HIGH);
  }

  if(temperatura > 26.00)
  {
    digitalWrite(led[5], HIGH);
  }

  else
  {
    digitalWrite(led[5], LOW);
  }

  if(temperatura > 26.50)
  {
    digitalWrite(led[6], HIGH);
  }

  else
  {
    digitalWrite(led[6], LOW);
  }

  if(temperatura > 27.00)
  {
    digitalWrite(led[7], HIGH);
  }

  else
  {
    digitalWrite(led[7], LOW);
  }

  if(temperatura > 27.50)
  {
    digitalWrite(led[8], HIGH);
  }

  else
  {
    digitalWrite(led[8], LOW);
  }

  if(temperatura > 28.00)
  {
    digitalWrite(led[9], HIGH);
    tone(som, 2000);
  }

  else
  {
    digitalWrite(led[9], LOW);
    noTone(som);
  }

}
