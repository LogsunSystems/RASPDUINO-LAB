/*
  Experiment:- Stepper Motor interfacing with Arduino Uno
  Compony:- Logsun Systems Pune
  Date:-19-09-2018
  Programmer:- Yogesh Gunjal
  Connection:- 1)Stepper Motor IP1 Pin :- Arduino Digital Pin :- 7
               2)Stepper Motor IP2 Pin :- Arduino Digital Pin :- 6
               3)Stepper Motor IP3 Pin :- Arduino Digital Pin :- 5
               4)Stepper Motor IP4 Pin :- Arduino Digital Pin :- 4
               5)Stepper Motor EN1 Pin :- Arduino Analog Pin :- A1
               6)Stepper Motor EN2 Pin :- Arduino Analog Pin :- A0
              (Connect relimate Connector to DC STEPPER and J12 connector)
*/
int EN1 = 9;
int EN2 = 10;
int IP1 = 7;
int IP2 = 2;
int IP3 = 8;
int IP4 = 0;
int i = 0;

int stp = A1;
int inc = A2;
int str = A3;
int rev = 4;
int dec = 5;

boolean DIR = false, START = false;

unsigned int count = 100;

void setup()
{
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(IP1, OUTPUT);
  pinMode(IP2, OUTPUT);
  pinMode(IP3, OUTPUT);
  pinMode(IP4, OUTPUT);
  pinMode(str, INPUT_PULLUP);
  pinMode(stp, INPUT_PULLUP);
  pinMode(rev, INPUT_PULLUP);
  pinMode(inc, INPUT_PULLUP);
  pinMode(dec, INPUT_PULLUP);
  //digitalWrite(EN1, HIGH);
  //digitalWrite(EN2, HIGH);
  count = 50;
}

void DirCLK()
{
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, HIGH);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, HIGH);
  digitalWrite(IP4, HIGH);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, HIGH);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, HIGH);
  digitalWrite(IP3, HIGH);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, HIGH);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, HIGH);
  digitalWrite(IP2, HIGH);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, HIGH);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, HIGH);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, HIGH);
  delay(count);
}

void DirAntiCLK()
{
  digitalWrite(IP1, HIGH);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, HIGH);
  delay(count);
  digitalWrite(IP1, HIGH);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, HIGH);
  digitalWrite(IP2, HIGH);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, HIGH);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, HIGH);
  digitalWrite(IP3, HIGH);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, HIGH);
  digitalWrite(IP4, LOW);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, HIGH);
  digitalWrite(IP4, HIGH);
  delay(count);
  digitalWrite(IP1, LOW);
  digitalWrite(IP2, LOW);
  digitalWrite(IP3, LOW);
  digitalWrite(IP4, HIGH);
  delay(count);
}

void loop() {
    if (digitalRead(str) == 0){
        START = true;
        digitalWrite(EN1, HIGH);
        //delay(1);
        digitalWrite(EN2, HIGH);
        //delay(1);
        delay(350);
    }
    if (digitalRead(stp) == 0){
        START = false;
        delay(350);
    }
    if ((digitalRead(rev) == 0) && (START == true)){
        DIR = !DIR;
        delay(350);
    }
    if ((digitalRead(inc) == 0) && (count > 5))
    {
        count = count - 5;
        delay(350);
    }
    if ((digitalRead(dec) == 0) && (count < 200))
    {
        count = count + 5;
        delay(350);
    }

    if (START == true){
        if (DIR == true){
            DirCLK();
        }
        else{
            DirAntiCLK();
        }
    }
    else{
        digitalWrite(EN1, LOW);
        digitalWrite(EN2, LOW);
        digitalWrite(IP1, LOW);
        digitalWrite(IP2, LOW);
        digitalWrite(IP3, LOW);
        digitalWrite(IP4, LOW);
    }


  //for (i = 0; i < 361; i++) {
  //  DirCLK();
  //}
  //delay(2000);
  //for (i = 0; i < 361; i++) {
  //  DirAntiCLK();
  //}
  //delay(2000);
}