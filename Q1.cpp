void setup()
{
  pinMode(1, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(12 , OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(1, LOW);
  delay(500);
  digitalWrite(1, HIGH);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(1, LOW);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(1, LOW);
  delay(500);
  digitalWrite(1, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(1, LOW);
  delay(500);
  digitalWrite(1, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(1,LOW);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(1,HIGH);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(1,LOW);
  delay(500);
}