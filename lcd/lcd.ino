#include <LiquidCrystal.h>
void setup()
{
  LiquidCrystal lcd(7,8,9,10,11,12);
  lcd.begin(16,2);
  lcd.print("Hola mundo");
  lcd.setCursor(0,1);
  lcd.print(":)");
}

void loop()
{
  
}