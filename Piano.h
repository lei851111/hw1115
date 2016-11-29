#ifndef Piano_h
#define Piano_h
#include "Arduino.h"

class Piano{
public:
	Piano();
	int getIRVal(int irpin);
	void setBuzzer(int buzzerpin);
	void setPitch(int irpin,int ledpin,int pitch,int delaytime);
	void MusicTutorial(int irpin[],int ledpin[],int pitches[],int notes[],float beat[],int numofpitches,int numofnotes);
private:
	int _buzzerpin;
};

#endif

