//Arduino Keyboard
int irPin[] = {2,3,4,5,6,7,8};//設定光敏感測器pin腳
int note[] = {262,294,330,349,392,440,494}; //設定音階頻率
int irVal[] ={}; //設定光敏感應值
int buzzerPin = 9; 

void setup()
{
  for(int i=0;i<sizeof(irPin)/sizeof(irPin[0]);i++){
    pinMode(irPin[i],INPUT); 
  }
  pinMode(buzzerPin,OUTPUT); 
  Serial.begin(9600);

}

void loop()
{
  
  for(int i=0;i<sizeof(irPin)/sizeof(irPin[0]);i++){
    irVal[i]=digitalRead(irPin[i]);
    if(irVal[i] == 0) {
    tone(buzzerPin,note[i],100);
    delay(100);
    }
  }

noTone(buzzerPin);
}
