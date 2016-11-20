//Arduino PhoneCall
int buzzerPin = 8;

void setup() {
    pinMode(buzzerPin,OUTPUT);
}
void loop() {
    for ( int i=0; i<8; i++ ) {
        tone(buzzerPin,1000);
        delay(50);
        tone(buzzerPin,500);
        delay(50);
    }
    noTone(buzzerPin);
    delay(1000);
}
