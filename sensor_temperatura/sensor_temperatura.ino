#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>

int sensor = 8;
int temp;
int humedad;
DHT dht11(sensor, DHT11);
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

byte grados[8] = {
  0b00110,
  0b01001,
  0b01001,
  0b00110,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

void setup() {
  dht11.begin();
  lcd.begin(16, 2);
  lcd.createChar(0, grados);
  Serial.begin(9600);
}

void loop() {
  temp = dht11.readTemperature();
  humedad = dht11.readHumidity();

  Serial.println(temp);
  lcd.setCursor(0, 0);
  lcd.print("Temperatura:");
  lcd.print(temp);
  lcd.write(byte(0));
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Humedad:");
  lcd.print(humedad);
  lcd.print("%");

  delay(2000);
}
