int value=0;
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  value=analogRead(A0);
  digitalWrite(8, HIGH);
  delay(value);
  digitalWrite(8, LOW);
  delay(value); 
  if(value<=341){
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(1); 
  }
  else if(value>341 && value<681){
  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1); 
  }
  else{
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(1); 
  }
}
