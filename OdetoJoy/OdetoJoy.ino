int buzzerPin = 8;
int note[]={330,330,349,392,392,349,330,294,262,262,294,330,330,294,294,330,330,349,392,392,349,330,294,262,262,294,330,294,262,262}; //樂譜
int lenghofnote = sizeof(note)/sizeof(note[0]);

void setup() {
  pinMode(buzzerPin,OUTPUT);
}

void loop() {
  for(int i=0;i<lenghofnote;i++){
    if(i==13 || i==28){ //八分音符
      tone(buzzerPin,note[i],250);
      delay(250);
    }
    else if(i==14 || i==29){ //二分音符
      tone(buzzerPin,note[i],1000);
      delay(1000);
    }
    else if(i==12 || i==27){ //附點四分音符
      tone(buzzerPin,note[i],750);
      delay(750);
    }
    else if(i==13){ 
      delay(250);
      tone(buzzerPin,note[i],500);
      delay(500);
    }
    else{ //四分音符
      tone(buzzerPin,note[i],500);
      delay(500);
    }
  }
}
