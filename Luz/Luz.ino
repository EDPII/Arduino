#include <BH1750.h>

BH1750 lightMeter(0x23);

void setup() {
  
Serial.begin(9600);


if (lightMeter.begin()) {
    Serial.println("O sensor BH1750 Iniciou");
  }
  else {
    Serial.println("Erro ao iniciar o BH1750");
  }
}

void loop() {
 
float lux = lightMeter.readLightLevel();
  Serial.print("Light: ");
  Serial.print(lux);
  Serial.println(" lx");
  delay(1000);
  
}
