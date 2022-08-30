const int sW1 = 10;
const int sW2 = 11; 
const int sW3 = 9; 
const int sW4 = 12; 
const int sW5 = 8; 
const int sW6 = 13; 
const int sW7 = 7; 
const int sW8 = A0; 
     
const int leD1 =  4; 
const int leD2 =  A3;
const int leD3 =  3; 
const int leD4 =  A2; 
const int leD5 =  A1; 
const int leD6 =  6;
const int leD7 =  2; 
const int leD8 =  5;       

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(leD1, OUTPUT);
  pinMode(leD2, OUTPUT);
  pinMode(leD3, OUTPUT);
  pinMode(leD4, OUTPUT);
  pinMode(leD5, OUTPUT);
  pinMode(leD6, OUTPUT);
  pinMode(leD7, OUTPUT);
  pinMode(leD8, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(sW1, INPUT);
  pinMode(sW2, INPUT);
  pinMode(sW3, INPUT);
pinMode(sW4, INPUT);
pinMode(sW5, INPUT);
pinMode(sW6, INPUT);
pinMode(sW7, INPUT);
pinMode(sW8, INPUT);
}

void loop() {
 if(digitalRead(sW1)==HIGH)
 {
  digitalWrite(leD1, HIGH);
 }
 else
 {
 digitalWrite(leD1, LOW);
 }

 
 if(digitalRead(sW2)==HIGH)
 {
  digitalWrite(leD2, HIGH);
 }
  else
 {
 digitalWrite(leD2, LOW);
 }
 
  if(digitalRead(sW3)==HIGH)
 {
  digitalWrite(leD3, HIGH);
 }
  else
 {
 digitalWrite(leD3, LOW);
 }
 
  if(digitalRead(sW4)==HIGH)
 {
  digitalWrite(leD4, HIGH);
 }
  else
 {
 digitalWrite(leD4, LOW);
 }
 
  if(digitalRead(sW5)==HIGH)
 {
  digitalWrite(leD5, HIGH);
 }
  else
 {
 digitalWrite(leD5, LOW);
 }
 
  if(digitalRead(sW6)==HIGH)
 {
  digitalWrite(leD6, HIGH);
 }
  else
 {
 digitalWrite(leD6, LOW);
 }
 
  if(digitalRead(sW7)==HIGH)
 {
  digitalWrite(leD7, HIGH);
 }
  else
 {
 digitalWrite(leD7, LOW);
 }
 
  if(digitalRead(sW8)==HIGH)
 {
  digitalWrite(leD8, HIGH);
 }
  else
 {
 digitalWrite(leD8, LOW);
 }
 



  
}
