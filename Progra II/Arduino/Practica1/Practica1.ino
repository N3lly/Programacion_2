boolean encendido = false;
int led1=5;
int led2=7;
int led3=9; // Con esto inicializamos las variables que usaremos de puertos //

void setup()
{
  pinMode(led1, OUTPUT); //Abrimos pines para salida//
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  encendido=!encendido; //Invertimos variable//
  if (encendido)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  delay(500);
}
    
  

