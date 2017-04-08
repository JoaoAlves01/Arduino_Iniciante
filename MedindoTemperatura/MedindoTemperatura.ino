int sensor = 0;
float temperatura = 0;
int adc = 0;

void setup() 
{
  Serial.begin(9600);
  analogReference(INTERNAL);
}

void loop() 
{
  adc = analogRead(sensor);
  temperatura = adc * 0.1075268817;

  Serial.print("Temperatura = ");
  Serial.print(temperatura);
  Serial.print(" *C");
  delay(1000);
}
