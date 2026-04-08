int buttonState = 0;
int val=0;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
  val=random(1000,5000);
}

void loop()
{ 
  
  if(millis()>=val){
    digitalWrite(13,HIGH);
  }
  buttonState = digitalRead(2);
  if(buttonState==1 && millis()>=val){
    Serial.print("Reaction Speed in milli seconds is ");
    Serial.println(millis()-val);
    digitalWrite(13,LOW);
    delay(1000);
    exit(0);
  }
}
