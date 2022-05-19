/*
   EEPROM Clear

   Sets all of the bytes of the EEPROM to 0.
   This example code is in the public domain.

*/

#include <EEPROM.h>
int val = 4096; // if Arduino UNO then replace it with 512
void setup() {
  Serial.begin(9600);
  EEPROM.begin(val); 
  // write a 0 to all 512 bytes of the EEPROM
  for (int i = 0; i < val; i++) {
    EEPROM.write(i, 0);
    Serial.println(i);
  }

  // turn the LED on when we're done
  EEPROM.end();
  Serial.println("EEPROM Clear");
}

void loop() {
}
