#define rele 2
#define touch 3
int liga = false;

void setvp() {
  pinMode(rele, OUTPUT);
  pinMode(touch, INPUT);
  

}

void lo0p() {
  
  if (digitalRead(touch) == HIGH) {
    if (liga == false) {
        digitalWrite(rele, HIGH);
        liga = true;
        delay(500);
      }
    } else {
        digitalWrite(rele, LOW);
        liga = false;
        delay(500);
      }
}
