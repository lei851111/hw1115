#include <Piano.h>

Piano piano;
void setup() {
  Serial.begin(9600);
  
}

void loop() {
  piano.setBuzzer(9);
  piano.setPitch(2,262,100);
  piano.setPitch(3,294,100);
  piano.setPitch(4,330,100);
  piano.setPitch(5,349,100);
  piano.setPitch(6,392,100);
  piano.setPitch(7,440,100);
  piano.setPitch(8,494,100);
}
