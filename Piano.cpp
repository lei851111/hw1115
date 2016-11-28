#include "Arduino.h"
#include "Piano.h"

Piano::Piano(){
}

void Piano::setBuzzer(int buzzerpin){
	_buzzerpin = buzzerpin;
	pinMode(_buzzerpin,OUTPUT);
}

int Piano::getIRVal(int irpin){
	int irval = digitalRead(irpin);
	return(irval);
}

void Piano::setPitch(int irpin,int ledpin,int pitch,int delaytime){
	pinMode(irpin,INPUT);
	pinMode(ledpin,OUTPUT);

	if (getIRVal(irpin)==LOW)
	{
		digitalWrite(ledpin,HIGH);
		tone(_buzzerpin,pitch,delaytime);
	}
	else{
		digitalWrite(ledpin,LOW);
	}
}

void Piano::MusicTutorial(int irpin[],int ledpin[],int pitches[],int notes[],int beat[],int numofpitches,int numofnotes){
	int irval[numofnotes];

	for(int i=0;i<numofpitches;i++){
		pinMode(irpin[i],INPUT);
		pinMode(ledpin[i],OUTPUT);
	}
	for(int i=0;i<numofnotes;i++){
		digitalWrite(ledpin[notes[i]],HIGH);
		irval[i]=digitalRead(irpin[notes[i]]);

		if(irval[i]==LOW){
			digitalWrite(ledpin[notes[i]],LOW);
			digitalWrite(ledpin[notes[i]+1],HIGH);
			tone(_buzzerpin,pitches[notes[i]],beat[i]*500);
		}
		else{
			i--;
		}
	}
}



