/* 3/1/13
   eyeBall prototype

   Wiring Diagram for atTiny85 in eyeBall
     
                         ______
               Reset  - |o     | - VCC (+) ***POWER IN***
***PHOTO***    Pin 3  - |      | - Pin 2
               Pin 4  - |      | - Pin 1
***GROUND*** (-) GND  - |______| - Pin 0  ***LED***


nateRudolph@gmail.com   
*/

void setup()
{
 pinMode(0, OUTPUT);
 pinMode(3, INPUT);
 digitalWrite(3, HIGH);
 digitalWrite(0, HIGH); 
}

void loop()
{
 int a = analogRead(3);
 
  if(a > 80){
   digitalWrite(0, HIGH); 
  }
  else{
   digitalWrite(0, LOW); 
  }
}
