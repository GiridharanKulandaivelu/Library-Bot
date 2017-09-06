void setup()
{
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  while((Serial.available()>0)&&(Serial.read()=='c'))
  {
    digitalWrite(8,HIGH);
   delay(1000); 
   digitalWrite(8,LOW);
   delay(1000);
    
  }
  

  
  
  
  
  
  

 
}
