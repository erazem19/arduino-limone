int speaker = 13;
void setup() {
    pinMode(10, OUTPUT);
    
}

//NOTES         'c',  'd', 'e', 'f',  'g'
int freqs[] = {1915, 1700, 1519, 1432, 1275};

void loop() {
    int limona = -1;
    for(int i = 0; i <= 4; i++) {
        if (analogRead(i) < 500) {
              limona = i;
        }
    }

    if(limona != -1){
      digitalWrite(speaker, HIGH);
      delayMicroseconds(freqs[limona]);
      digitalWrite(speaker, LOW);
      delayMicroseconds(freqs[limona]);
    }
    else{
       digitalWrite(speaker, LOW);
    }
}
