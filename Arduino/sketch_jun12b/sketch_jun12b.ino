int ledRed = 8;      // LED connected to digital pin 4

void setup(){
  // Open serial connection.
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);    
}

void loop(){
  if(Serial.available() > 0){      // if data present, blink
        digitalWrite(ledRed, HIGH);
        delay(1000);            
        digitalWrite(ledRed, LOW);
        delay(1000);
        Serial.flush();
  }
} 

