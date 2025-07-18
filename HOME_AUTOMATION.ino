#include <LiquidCrystal.h>

// LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

// Appliance pins
const int wifiRouter     = 2;
const int fan            = 3;
const int light          = 4;
const int waterPump      = 5;
const int ac             = 6;
const int purifier       = 7;
const int buzzer         = A1;

// Temperature sensor pin
const int tempPin = A0;

// Appliance names
String applianceNames[6] = {
  "WiFi Router",
  "Fan",
  "Light",
  "Water Pump",
  "A.C.",
  "Water Purifier"
};

// Appliance pins array
int relayPins[6] = {wifiRouter, fan, light, waterPump, ac, purifier};

void setup() {
  Serial.begin(9600);

  // Set relay pins and buzzer as OUTPUT
  for (int i = 0; i < 6; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], LOW);
  }
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);

  // LCD setup
  lcd.begin(16, 2);
  lcd.print("Home Automation");
  delay(2000);
  lcd.clear();

  // Sequential appliance activation
  for (int i = 0; i < 6; i++) {
    digitalWrite(relayPins[i], HIGH);
    Serial.print(applianceNames[i]);
    Serial.println(" is ON");
    delay(1000);
  }

  // Activate Buzzer
  digitalWrite(buzzer, HIGH);
  Serial.println("Buzzer ON - All devices activated");
  delay(1000);
  digitalWrite(buzzer, LOW);
}

void loop() {
  // Read temperature
  int raw = analogRead(tempPin);
  float voltage = raw * 5.0 / 1023.0;
  float tempC = voltage * 100.0;

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC);
  lcd.print(" C   ");

  lcd.setCursor(0, 1);
  if (tempC > 40.0) {
    lcd.print("Warning: Hot!   ");
  } else {
    lcd.print("System Normal   ");
  }

  delay(1000);
}
