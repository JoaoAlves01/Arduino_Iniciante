int sensor = 0;
float temperatura = 0;
int adc = 0;

int som = 12;

void setup() 
{
 analogReference(INTERNAL);
 pinMode(som, OUTPUT);
}

void loop() 
{
  adc = analogRead(sensor);
  temperatura = adc * 0.1075268817204301;

  if(temperatura > 32)
  {
    delay(1000);
    if(temperatura >32)
   {
     tone(som, 2000);
   }
  }

    else
    {
    noTone(som);
    }
}
