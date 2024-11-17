#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int lightSensorPin = A0;
const int soundSensorPin = A1;
int snoreCounter = 0;
int luxValue = 0;

void setup() {
  lcd.begin(16, 2);
  pinMode(soundSensorPin, INPUT);
  pinMode(lightSensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  luxValue = analogRead(lightSensorPin);
  int soundValue = analogRead(soundSensorPin);

  if (soundValue > 700) { // Example threshold
    delay(1000);
    snoreCounter++;
  }
  
  lcd.setCursor(0, 0);
  lcd.print("Snore: ");
  lcd.print(snoreCounter);
  
  lcd.setCursor(0, 1);
  lcd.print("Lux: ");
  lcd.print(luxValue);
  
  if (luxValue > 50) {
    lcd.setCursor(8, 1);
    lcd.print("TooBright");
  } else {
    lcd.setCursor(8, 1);
    lcd.print("GoodNight");
  }

  Serial.print("Sound: ");
  Serial.println(soundValue);
  delay(100);
}
