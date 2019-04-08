int RED = 2;
int BLUE = 3;
int GREEN = 4;
int D0 = 5;
int D1 = 6;
int D2 = 7;
int D3 = 8;
void setup ()
{
  pinMode(5, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);

  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(D0) == HIGH)
  {
    Serial.println("D0");
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
  }
  if (digitalRead(D1) == HIGH)
  {
    Serial.println("D1");
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, HIGH);
    digitalWrite(GREEN, LOW);
  }
  if (digitalRead(D2) == HIGH)
  {
    Serial.println("D2");
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, HIGH);
    digitalWrite(GREEN, HIGH);
  }
  if (digitalRead(D3) == HIGH)
  {
    Serial.println("D3");
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
  }

}
