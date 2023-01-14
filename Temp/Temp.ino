#include <Adafruit_BMP085.h>
#include <Wire.h>

Adafruit_BMP085 bmp180;

void setup() {
  Serial.begin(9600);
  if(!bmp180.begin()) {
    Serial.println("Sensor não encontrado!!");
    while(1) {}
    }
}

void loop() {
 if ( bmp180.readTemperature() < 10)
   {
     
     Serial.print(bmp180.readTemperature());
     Serial.println(" C");
   }
   else
   {
     Serial.print(bmp180.readTemperature(),1);
     Serial.println(" C");
   }
   
     Serial.print("Altitude : ");
     Serial.print(bmp180.readAltitude());
     Serial.println(" m");

     Serial.print("Pressao : ");
     Serial.print(bmp180.readPressure()); 
     Serial.println(" Pa");

}
