int p;
int lp;
int value=0;
#include <SoftwareSerial.h>
void setup() {
  // put your setup code here, to run once:
  p=6;
  lp=7;
  pinMode(p,INPUT);
  pinMode(lp,OUTPUT); 
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   /*value=digitalRead(p);
   digitalWrite(lp,value);
   delay(1000);
}*/
   value=digitalRead(p);
   if(value==HIGH)
   {

    
    digitalWrite(lp,HIGH);
    delay(1000);
    Serial.println("OBJECT AHEAD");
    
   }
   else
   {
    digitalWrite(lp,LOW);
    delay(200);
    Serial.println("PATH CLEAR");
   }
delay(200);
}
