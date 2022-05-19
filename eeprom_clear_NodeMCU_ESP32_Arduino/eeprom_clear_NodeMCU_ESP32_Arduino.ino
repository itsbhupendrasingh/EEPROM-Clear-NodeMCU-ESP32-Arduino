/*
   EEPROM Clear

   Sets all of the bytes of the EEPROM to 0.
   This example code is in the public domain.

*/

#include <EEPROM.h>
int val = 4096; // write a 0 to all 4096 bytes of the EEPROM
// if Arduino UNO then replace it with 512
void setup() {
  Serial.begin(9600);
  EEPROM.begin(val); 
  for (int i = 0; i < val; i++) {
    EEPROM.write(i, 0);
    Serial.println(i);
  }

  EEPROM.end();
  Serial.println("EEPROM Clear");
}

void loop() {
}
