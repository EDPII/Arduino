#include <DHT.h>

#define sensor 7
#define modelo DHT11


DHT dht(sensor, modelo);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Efetuando leituras!");
}

void loop() {
  delay(2000);
  // Lendo a umidade
  float umi  = dht.readHumidity();
  
  // Lendo a temperatura na escala Celsius
  float tempC = dht.readTemperature();

  if (isnan(umi) || isnan(tempC)) {
    Serial.println("Falha na leitura do seu sensor DHT!");
  } else {
    Serial.print("Umidade: ");
    Serial.print(umi);
    Serial.print("%");
    Serial.print("  |  "); 
    Serial.print("Temperatura: ");
    Serial.print(tempC);
    Serial.print("°C ~ ");

    }
}
