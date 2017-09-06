int ana1=A0;
int ana2=A1;
int ana3=A2;
int sen1=0;
int sen2=0;
int sen3=0;
int o1=8;
int o2=9;
int o3=10;
int o4=11;
int o5=12;
int o6=13;
int pot1=725;
int pot2=300;
int pot3=760;
void setup()
{
  pinMode(o1,OUTPUT);
  pinMode(o2,OUTPUT);
  pinMode(o3,OUTPUT);
  pinMode(o4,OUTPUT);
  pinMode(o5,OUTPUT);
  pinMode(o6,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  sen1=analogRead(ana1);
  sen2=analogRead(ana2);
  sen3=analogRead(ana3);
  //Serial.println(sen1);
  Serial.println(sen2);
  //Serial.println(sen3);
  if((sen1 < pot1)&&(sen2 > pot2)&&(sen3 < pot3))
  {
    digitalWrite(o1,HIGH);
    digitalWrite(o2,LOW);
    digitalWrite(o3,HIGH);
    digitalWrite(o4,LOW);
  }
  else if(((sen1 > pot1)&&(sen2 > pot2)&&(sen3 < pot3))||((sen1 > pot1)&&(sen2 < pot2)&&(sen3 < pot3)))
  {
    digitalWrite(o1,LOW);
    digitalWrite(o2,LOW);
    digitalWrite(o3,HIGH);
    digitalWrite(o4,LOW);
  }
  else if(((sen1 < pot1)&&(sen2 > pot2)&&(sen3 > pot3))||((sen1 < pot1)&&(sen2 < pot2)&&(sen3 > pot3)))
{
    digitalWrite(o1,HIGH);
    digitalWrite(o2,LOW);
    digitalWrite(o3,LOW);
    digitalWrite(o4,LOW);
}
else if((sen1 > pot1)&&(sen2 > pot2)&&(sen3 > pot3))
{
    digitalWrite(o1,LOW);
    digitalWrite(o2,LOW);
    digitalWrite(o3,LOW);
    digitalWrite(o4,LOW);
}
else
{
  digitalWrite(o1,LOW);
  digitalWrite(o2,HIGH);
  digitalWrite(o3,LOW);
  digitalWrite(o4,HIGH);
}
}
    
    
  
