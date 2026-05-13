#include <Arduino.h>
#include <LiquidCrystal.h>
const int Trigger = 3;
const int Echo = 2;
LiquidCrystal lcd(7,8,9,10,11,12);
void setup()
  
{
  Serial.begin(9600);
  
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  digitalWrite(Trigger, LOW);
  
  lcd.begin(16, 2);
  
  
}

void loop()
{
  
  long tiempo;
  long distancia;
  
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW);
  
  tiempo = pulseIn(Echo, HIGH);
  distancia = tiempo/59;
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Dist: ");
  lcd.print(distancia);
  lcd.print(" cm");
  
  delay(200);
}