#include <Arduino.h>


#define entrada1  7
#define entrada2  6
#define salida  13

void setup() 
{
  pinMode(entrada1,INPUT);
  pinMode(entrada2,INPUT);
  pinMode(salida,OUTPUT);
}

void loop() 
{
  if(digitalRead(entrada1) == 0 && digitalRead(entrada2) == 0)
  {
    digitalWrite(salida,LOW);
  }

  else
  {
    digitalWrite(salida,HIGH);
  }
}