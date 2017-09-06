// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
 
int potpin = 0;  // analog pin used to connect the potentiometer
int val; // variable to read the value from the analog pin 

 
void setup() 
{ 
  myservo.attach(5);  // attaches the servo on pin 9 to the servo object 
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
} 
 
void loop() 
{ 
 digitalWrite(4,HIGH);
 digitalWrite(3,LOW); 
  myservo.write(100);                  // sets the servo position according to the scaled value 
  delay(15);                           // waits for the servo to get there 
} 
