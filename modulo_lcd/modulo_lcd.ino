#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

byte carita_feliz[8] = {
  B01010,
  B01010,
  B01010,
  B00000,
  B00100,
  B10001,
  B01110,
  B00000};

byte corazon[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, carita_feliz);
  lcd.createChar(1, corazon);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Dale a me gusta");
  lcd.write(byte(1));
  lcd.setCursor(5, 1);
  lcd.print("y seguir!");
  lcd.write(byte(0));
  lcd.scrollDisplayLeft();
  delay(600);
}
