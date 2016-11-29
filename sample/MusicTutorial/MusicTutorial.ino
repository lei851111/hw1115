#include <Piano.h>
#include "pitches.h"

int irpin[] = {12,10,8,6,4}; //循線感測器 pin腳
int ledpin[] = {13,11,9,7,5}; //led pin腳
int pitches[] = {NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4}; //音高
int notes[] = {2,2,3,4,4,3,2,1,0,0,1,2,2,1,1,2,2,3,4,4,3,2,1,0,0,1,2,1,0,0}; //樂譜
float beat[] = {1,1,1,1,1,1,1,1,1,1,1,1,1.5,0.5,2,1,1,1,1,1,1,1,1,1,1,1,1,1.5,0.5,2}; //節拍
int numofpitches = sizeof(irpin)/sizeof(irpin[0]); //音高數量
int numofnotes = sizeof(notes)/sizeof(notes[0]); //音符數量

Piano piano; 
void setup() {
  piano.setBuzzer(2);
}

void loop() {
  piano.MusicTutorial(irpin,ledpin,pitches,notes,beat,numofpitches,numofnotes);
}
