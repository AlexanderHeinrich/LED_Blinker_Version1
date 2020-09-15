/*
 * Funktion: LED blinkt im Sekundentakt
 * Programmierer:AH
 * letzte Änderung: 11.09.2020
 * Version: 0.01
 * 
 * Hardware: grüne LED an Pin 3 / Wiederstand 220 Ohm
 * 
 * 
 */


void setup() 
{
  pinMode(3, OUTPUT);         //LED grün
  Serial.begin(9600);         //zum testen
}

void loop() 
{
 digitalWrite(3, HIGH);      //LED an
 Serial.print("LED an ");
 delay(1000);               // Wartezeit
 digitalWrite(3,LOW);       // LED aus
 Serial.print("LED aus ");
 delay(1000);
}
