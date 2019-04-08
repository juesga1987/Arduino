#define GREEN 11
#define RED 6
#define BLUE 5
#define DELAYTIME 50

void setup()
{
  pinMode(RED, OUTPUT);
  digitalWrite(RED, LOW);
  pinMode(BLUE, OUTPUT);
  digitalWrite(BLUE, LOW);
  pinMode(GREEN, OUTPUT);
  digitalWrite(GREEN, LOW);
}

void loop()
{
  for(int i= 0; i<256; i +=1)
  { // for (variable índice; condición; incrementador)Este Bucle hace que se incremente desde i 0 a i 256 incrementadonse en una unidad cada vez
    analogWrite(RED, i); // Hace que el PIN se comporte segùn la funciòn FOR.
    delay(DELAYTIME);// Es el que hace que el cambio de intensidad no se de de manera inmediata
  }
  digitalWrite(RED, LOW);
  for(int i= 0; i<256; i +=1)
  {
    analogWrite(BLUE, i);
    delay(DELAYTIME);
  }
  digitalWrite(BLUE, LOW);
  for(int i= 0; i<256; i +=1)
  {
    analogWrite(GREEN, i);
    delay(DELAYTIME);
  }
  digitalWrite(GREEN, LOW);
}
