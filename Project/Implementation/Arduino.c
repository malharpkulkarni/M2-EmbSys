#include <LiquidCrystal.h>

int D7_pin = 4;
int D6_pin = 5;
int D5_pin = 6;
int D4_pin =  7;
int EN_pin = 11;
int RS_pin = 12;
#define LED 13  
#define Fan 2
LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);

void setup()
{
  lcd.begin(16, 2);  
    pinMode(LED, OUTPUT); 
    pinMode(Fan, OUTPUT);

}

void loop()
{
    digitalWrite(LED, HIGH); 
    delay(2000);
    digitalWrite(Fan,HIGH);
  lcd.clear();
  lcd.print("System on first mode");
  lcd.setCursor(0, 1);

  delay(3000); 
  digitalWrite(LED, HIGH); 
    delay(1000);
    digitalWrite(Fan,HIGH);
  lcd.clear();
  lcd.print("system on second mode");
  lcd.setCursor(0, 1);

  delay(3000); 

digitalWrite(LED, HIGH); 
delay(500);
digitalWrite(Fan,HIGH);
lcd.clear();
lcd.print("system on third mode");
 lcd.setCursor(0, 1);
    
digitalWrite(LED, LOW); 
digitalWrite(Fan,LOW);
lcd.clear();
lcd.print("system Off");
 lcd.setCursor(0, 1);
 
    
    
}