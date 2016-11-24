int note[]={330,330,349,392,392,349,330,294,262,262,294,330,330,294,294,330,330,349,392,392,349,330,294,262,262,294,330,294,262,262}; //樂譜
float beat[]={1,1,1,1,1,1,1,1,1,1,1,1,1.5,0.5,2,1,1,1,1,1,1,1,1,1,1,1,1,1.5,0.5,2}; //節拍
int lenghofnote = sizeof(note)/sizeof(note[0]);
float bt=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0;i<lenghofnote;i++){
    bt=500*beat[i];
    tone(8,note[i],bt);
    delay(bt);
    Serial.println(bt);
  }
}
