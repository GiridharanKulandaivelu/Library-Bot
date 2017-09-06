void setup()
{
  int a[10];
pinMode(13,OUTPUT);
Serial.begin(9600);
}
void loop()
{int a;
  a=Serial.read();
  if((Serial.available()>0)&&(a[1]=='4'))
  {
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
  }
}
