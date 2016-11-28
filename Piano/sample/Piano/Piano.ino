#include <Piano.h>
#include "pitches.h"

Piano piano;
void setup() {
  piano.setBuzzer(2);
}

void loop() {
  piano.setPitch(8,13,NOTE_C4,100);
  piano.setPitch(7,12,NOTE_D4,100);
  piano.setPitch(6,11,NOTE_E4,100);
  piano.setPitch(5,10,NOTE_F4,100);
  piano.setPitch(4,9,NOTE_G4,100);
}
