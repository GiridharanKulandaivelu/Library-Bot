/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor 
 
 This example code is in the public domain.
 */
int incomingByte;

void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
digitalWrite(13,LOW);
  if(Serial.available())
{
incomingByte=Serial.read();
Serial.print(incomingByte);

 digitalWrite(13, HIGH);   // set the LED on
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // set the LED off
  delay(1000);              // wait for a second

}
}



