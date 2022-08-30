/*
###########################################################
#Traffic Light interface with Arduino Uno
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
*/
const int sp1 =  A3;   
const int sp2 =  0;    
const int sp3 =  13;  
const int sp4 =  5; 
  
const int go1 =  10;  
const int go2 =  3;  
const int go3 =  A1; 
const int go4 =  7;
  
const int st1 =  9;    
const int st2 =  1;  
const int st3 =  A0;  
const int st4 =  6;
   
const int gl1 =  12;
const int gl2 =  4;  
const int gl3 =  A2; 
const int gl4 =  8;  
int i=0;

void setup() {
  // put your setup code here, to run once:

 pinMode(sp1, OUTPUT);
  pinMode(sp2, OUTPUT);
  pinMode(sp3, OUTPUT);
  pinMode(sp4, OUTPUT);

  pinMode(go1, OUTPUT);
  pinMode(go2, OUTPUT);
  pinMode(go3, OUTPUT);
  pinMode(go4, OUTPUT);

  pinMode(st1, OUTPUT);
  pinMode(st2, OUTPUT);
  pinMode(st3, OUTPUT);
  pinMode(st4, OUTPUT);

  pinMode(gl1, OUTPUT);
  pinMode(gl2, OUTPUT);
  pinMode(gl3, OUTPUT);
  pinMode(gl4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 digitalWrite(sp1, HIGH);
 digitalWrite(sp3, HIGH);
  digitalWrite(go2, HIGH);
 digitalWrite(go4, HIGH);
digitalWrite(gl2, HIGH);
digitalWrite(gl4, HIGH);
delay(5000);

digitalWrite(go2, LOW);
 digitalWrite(go4, LOW);
digitalWrite(gl2, LOW);
digitalWrite(gl4, LOW);
// digitalWrite(sp1, HIGH);
 //digitalWrite(sp3, HIGH);
 //delay(500);
  digitalWrite(sp1, HIGH);
 digitalWrite(sp3, HIGH);
 for(i=0;i<=5;i++)
 {
  digitalWrite(st2, HIGH);
 digitalWrite(st4, HIGH);

 delay(500);
 digitalWrite(st2, LOW);
 digitalWrite(st4, LOW);
 delay(500);
 }
 
 //delay(5000);

digitalWrite(sp1, LOW);
 digitalWrite(sp3, LOW);

  digitalWrite(st2, LOW);
 digitalWrite(st4, LOW);



 digitalWrite(sp2, HIGH);
 digitalWrite(sp4, HIGH);
  digitalWrite(go1, HIGH);
 digitalWrite(go3, HIGH);
digitalWrite(gl1, HIGH);
digitalWrite(gl3, HIGH);
delay(5000);

digitalWrite(go1, LOW);
 digitalWrite(go3, LOW);
digitalWrite(gl1, LOW);
digitalWrite(gl3, LOW);
// digitalWrite(sp1, HIGH);
 //digitalWrite(sp3, HIGH);
 //delay(500);
  digitalWrite(sp2, HIGH);
 digitalWrite(sp4, HIGH);
 for(i=0;i<=5;i++)
 {
  digitalWrite(st1, HIGH);
 digitalWrite(st3, HIGH);

 delay(500);
 digitalWrite(st1, LOW);
 digitalWrite(st3, LOW);
 delay(500);
 }
 
 //delay(5000);

digitalWrite(sp2, LOW);
 digitalWrite(sp4, LOW);

  digitalWrite(st1, LOW);
 digitalWrite(st3, LOW);




 }

 
