int cm = 0;
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd_1(0);
long time(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
  lcd_1.print("DISTANCE : ");
}

void loop()
{
  cm = 0.01723 * time(7, 7);
  if(cm<=35){
    tone(9,1500);
    delay(100);
    noTone(9);
  }
  lcd_1.setCursor(0, 1);
  lcd_1.print(cm);
  lcd_1.print("  ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
}
