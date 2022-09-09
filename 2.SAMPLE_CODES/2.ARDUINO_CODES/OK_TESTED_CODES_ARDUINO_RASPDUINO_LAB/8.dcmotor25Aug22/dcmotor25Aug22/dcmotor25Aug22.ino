/*
  ###########################################################
  #DC Motor interface with Arduino Uno
  #Compony Name- Logsun Systems
  #Developer- Yogesh Gunjal
  ###########################################################
*/
int str = A3;
int rev = 4;
int inc = A2;
int dec = 5;
int stp = A1;
int ip1 = 7;
int ip2 = 2;
int count = 100;
int val1, val2, val3, val4, val5;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(str, INPUT_PULLUP);
  pinMode(rev, INPUT_PULLUP);
  pinMode(ip1, OUTPUT);
  pinMode(ip2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = digitalRead(str);
  val2 = digitalRead(rev);
  val3 = digitalRead(inc);
  val4 = digitalRead(dec);
  val5 = digitalRead(stp);
  analogWrite(9, count);
  if (val3 == 0)
  {
    if (count < 500)
    {
      digitalWrite(ip1, HIGH);
      digitalWrite(ip2, LOW);
      count++;
      delay(50);
    }
  }
  if (val4 == 0)
  {
    if (count > 0)
    {
      digitalWrite(ip1, HIGH);
      digitalWrite(ip2, LOW);
      count--;
      delay(50);
    }
  }
  if (val5 == 0)
  {
    digitalWrite(9, LOW);
    digitalWrite(ip1, LOW);
    digitalWrite(ip2, LOW);
  }
  if (val1 == 0)
  {
    digitalWrite(ip1, HIGH);
    digitalWrite(ip2, LOW);
    delay(100);
  }
  if (val2 == 0)
  {
    digitalWrite(ip1, LOW);
    digitalWrite(ip2, HIGH);
    delay(100);
  }
}
