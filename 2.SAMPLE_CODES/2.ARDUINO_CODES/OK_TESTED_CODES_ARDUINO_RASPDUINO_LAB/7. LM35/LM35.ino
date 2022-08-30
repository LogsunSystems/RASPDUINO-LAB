/*
###########################################################
#LM35 interface with Arduino Uno
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
*/
int val;
int tempPin = A3;

const int led1= 5; 
const int led2= A2;
const int led3= 6;
const int led4= A1;
const int led5= 7;
const int led6= A0;
const int led7= 8;
const int led8= 13;



void setup()
{
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
}
void loop()
{
val = analogRead(tempPin);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;

Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
delay(1000);
if(cel<10)
{
  digitalWrite(led1, LOW);
  digitalWrite(led2,HIGH);
   digitalWrite(led3, HIGH);
  digitalWrite(led4,  HIGH);
    digitalWrite(led5, HIGH);
     digitalWrite(led6, HIGH); 
     digitalWrite(led7, HIGH); 
    digitalWrite(led8, HIGH);
}
else if(cel<20)
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4,  HIGH);
    digitalWrite(led5, HIGH);
     digitalWrite(led6, HIGH); 
     digitalWrite(led7, HIGH); 
    digitalWrite(led8, HIGH);
}else if(cel<30)
{
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4,  HIGH);
    digitalWrite(led5, HIGH);
     digitalWrite(led6, HIGH); 
     digitalWrite(led7, HIGH); 
    digitalWrite(led8, HIGH);
}
else if(cel<40)
{
   digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
     digitalWrite(led6, HIGH); 
     digitalWrite(led7, HIGH); 
    digitalWrite(led8, HIGH);
}
else if(cel<50)
{
   digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH); 
     digitalWrite(led7, HIGH); 
    digitalWrite(led8, HIGH);
}
 else if(cel<60)
 {
  
   digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
     digitalWrite(led6, LOW);
     digitalWrite(led7, HIGH); 
    digitalWrite(led8, HIGH);
}
  else if(cel<70)
  {
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
     digitalWrite(led6, LOW); 
     digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH); 
  }
   else if(cel<80)
   {digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
     digitalWrite(led6, LOW); 
     digitalWrite(led7, LOW); 
    digitalWrite(led8, LOW);
   }
   else if(cel>80)
   {
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
   digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
     digitalWrite(led6, LOW); 
     digitalWrite(led7, LOW); 
    digitalWrite(led8, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
   digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
     digitalWrite(led6,HIGH); 
     digitalWrite(led7,HIGH); 
    digitalWrite(led8, HIGH);
    delay(1000);
   }
/* uncomment this to get temperature in farenhite 
Serial.print("TEMPRATURE = ");
Serial.print(farh);
Serial.print("*F");
Serial.println();


*/
}
