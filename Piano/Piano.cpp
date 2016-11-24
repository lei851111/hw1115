#include "Arduino.h"
#include "Piano.h"

Piano::Piano(){
}

void Piano::setBuzzer(int buzzerpin){
	_buzzerpin = buzzerpin;
	pinMode(_buzzerpin,OUTPUT);
}
void Piano::setPitch(int pin,int pitch,int delaytime){
	_pin =  pin;
	_pitch =  pitch;
	_delaytime = delaytime;
	int val;
	pinMode(_pin,INPUT);
	val = digitalRead(_pin);
	if (val==0)
	{
		tone(_buzzerpin,_pitch,_delaytime);
	}
	Serial.println(val);
}


