#include <Wire.h>

void setup() {
  Wire.begin(8);               
  Wire.onReceive(receiveEvent); 
  Serial.begin(9600);          
}

void loop() {
  delay(100);
}

void receiveEvent(int bytes) {
  while (Wire.available()) { 
    char c = Wire.read();    
    int x= Wire.read();
    Serial.print(c);          
    if(x%2==0)
    {
      Serial.print("Even");
    }
    else
    {
      Serial.print("Odd");
    }
  }

}
