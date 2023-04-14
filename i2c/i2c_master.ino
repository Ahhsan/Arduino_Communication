// I2C Master
#include <Wire.h>

int x=0;

void setup() {
  Wire.begin();        
}

void loop() {
  Wire.beginTransmission(8); 
  Wire.write("message from master"); 
  Wire.write(x);
  Wire.endTransmission();    
  x++;
  delay(1000); 
}                
