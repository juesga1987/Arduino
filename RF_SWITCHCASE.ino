
int D0 = 5;
int D1 = 6;
int D2 = 7;
int D3 = 8;
int RED = 2;
int BLUE = 3;
int GREEN = 4;
int PUSH;

void setup() {

  pinMode(D0, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(D3, INPUT_PULLUP);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  if (digitalRead(D0) == HIGH)
  {
    PUSH = 1;
    delay(10);
  }

  if (digitalRead(D1) == HIGH)
  {
    PUSH = 2;
    delay(10);
  }

  if (digitalRead(D2) == HIGH)
  {
    PUSH = 3;
    delay(10);
  }
  if (digitalRead(D3) == HIGH)
{
  PUSH = 4;
  delay(10);
  }
  switch (PUSH)
{
  case 1:
    digitalWrite(RED, HIGH);
      digitalWrite(BLUE, HIGH);
      digitalWrite(GREEN, LOW);
      break;

    case 2:
      digitalWrite(RED, LOW);
      digitalWrite(BLUE, HIGH);
      digitalWrite(GREEN, HIGH);
      break;

    case 3:
      digitalWrite(RED, HIGH);
      digitalWrite(BLUE, LOW);
      digitalWrite(GREEN, HIGH);
      break;

    case 4:
      digitalWrite(RED, LOW);
      digitalWrite(BLUE, LOW);
      digitalWrite(GREEN, LOW);
      break;
  }
}
