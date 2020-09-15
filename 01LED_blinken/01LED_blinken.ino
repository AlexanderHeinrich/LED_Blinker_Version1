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
#define grueneLED 3          //Grüne LED auf Pin 3

void setup() 
{
  pinMode(grueneLED, OUTPUT); //LED grün
  Serial.begin(9600);         //zum testen
}

void loop() 
{
 digitalWrite(grueneLED, HIGH);      //LED an
 Serial.print("Grüne LED an ");
 delay(1000);                        //Wartezeit
 digitalWrite(grueneLED,LOW);        //LED aus
 Serial.print("Grüne LED aus ");
 delay(1000);                        //Wartezeit
}
