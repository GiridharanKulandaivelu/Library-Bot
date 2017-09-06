#include <Servo.h>
Servo myservo;
void setup()
{
  Serial.begin(9600);
  myservo.attach(9);
}

void loop()
{
  if((Serial.available()>0))
  {
    char a;
  a=Serial.read();
  Serial.println(a);
  if(a=='a')
  {
    myservo.write(100);
  }
  else
  {
    myservo.write(180);
  }
  
    //myservo.write(20);
  }
}
