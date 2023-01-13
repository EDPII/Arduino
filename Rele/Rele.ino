#define rele 2
#define touch 3

void setup() {
  pinMode(rele, OUTPUT);
  pinMode(touch, INPUT);
  

}

void loop() {
  
  if (digitalRead(touch) == HIGH) {
    digitalWrite(rele, HIGH);
    } else {
    digitalWrite(rele, LOW);
      }
  delay(500);
}
