#ifndef Piano_h
#define Piano_h
#include "Arduino.h"

class Piano{
public:
	Piano();
	void setBuzzer(int buzzerpin);
	void setPitch(int pin,int pitch,int delaytime);
private:
	int _buzzerpin;
	int _pin;
	int _pitch;
	int _delaytime;
};
#endif

