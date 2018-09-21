#define vout A0
#include <SoftwareSerial.h>
float temp=0.0,value=0.0;
int p;
void setup() {
  // put your setup code here, to run once:
   p=5;
   pinMode(p,OUTPUT);
   pinMode(vout,INPUT);
   Serial.begin(9600);
   
  }

void loop() {
  // put your main code here, to run repeatedly:
   value=analogRead(vout);
   delay(500);
   temp=(value*500)/1024;
   if(temp>=30.0)
   {
    digitalWrite(p,HIGH);
    delay(1000);
    
    }
   else
   {
    digitalWrite(p,LOW);
    delay(1000);
   }
   Serial.println("Temperature in degree:");
    Serial.println(temp);
 }

  
