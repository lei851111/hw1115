#include <Piano.h>
#include "pitches.h"

int irpin[] = {8,7,6,5,4}; //循線感測器 pin腳
int ledpin[] = {13,12,11,10,9}; //led pin腳
int pitches[] = {NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4}; //音高
int notes[] = {0,1,2,3,2,1,0}; //樂譜
int beat[] = {1,1,1,1,1,1,1}; //節拍
int numofpitches = sizeof(irpin)/sizeof(irpin[0]); //音高數量
int numofnotes = sizeof(notes)/sizeof(notes[0]); //音符數量

Piano piano; 
void setup() {
  piano.setBuzzer(2);
}

void loop() {
  piano.MusicTutorial(irpin,ledpin,pitches,notes,beat,numofpitches,numofnotes);
}
