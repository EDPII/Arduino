#define buzzer 10
int n = 7;
int note  = 262;
void setup() {
  pinMode(buzzer, OUTPUT);

}

void loop() {
  while(n<=7){
    noTone(buzzer);
    tone(buzzer, note);
    delay(200);
    n++;
    note = note + 33;
    }

}
