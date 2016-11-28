#ifndef Piano_h
#define Piano_h
#include "Arduino.h"

class Piano{
public:
	Piano();
	void setBuzzer(int buzzerpin);
	void setPitch(int irpin,int ledpin,int pitch,int delaytime);
	void MusicTutorial(int irpin[],int ledpin[],int pitches[],int notes[],int beat[],int numofpitches,int numofnotes);
	int getIRVal(int irpin);
private:
	int _buzzerpin;
};

#endif

