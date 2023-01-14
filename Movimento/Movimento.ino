#define sensor 7

bool mov = false;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(13, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensor) == HIGH){
    digitalWrite(13, HIGH);
    
    if (mov == false) {
      Serial.println("Movimento Detectado!");
      mov= true;
      }
    }else{
      digitalWrite(13,LOW);
      if (mov == true){
         Serial.println("Movimento Acabou!");
         mov= false;
        }
      }
  
}
