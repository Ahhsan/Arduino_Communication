char serialinput  = ' ';

 
void setup()
{
   pinMode(LED, OUTPUT);
   Serial.begin(9600);
}
void loop()
{
   if(Serial.available())
   {
      char serialinput = Serial.read();
      if (serialinput =='0') { Serial.print("zero"); }
      if (serialinput =='1') { Serial.print("One"); }
      Serial.println(serialinput);
   }
}
