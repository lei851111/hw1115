#include "Arduino.h"
#include "Piano.h"

Piano::Piano(){
}

//設定buzzer
void Piano::setBuzzer(int buzzerpin){
	_buzzerpin = buzzerpin;
	pinMode(_buzzerpin,OUTPUT);
}

//取得循線感測器數值
int Piano::getIRVal(int irpin){
	int irval = digitalRead(irpin);
	return(irval);
}

//設定循線感測器琴鍵音高
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

//樂曲教學模式
void Piano::MusicTutorial(int irpin[],int ledpin[],int pitches[],int notes[],float beat[],int numofpitches,int numofnotes){
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
			tone(_buzzerpin,pitches[notes[i]],beat[i]*500);
			delay(200);
			digitalWrite(ledpin[notes[i+1]],HIGH);
		}
		else{
			i--;
		}
		delay(100);
	}
}




