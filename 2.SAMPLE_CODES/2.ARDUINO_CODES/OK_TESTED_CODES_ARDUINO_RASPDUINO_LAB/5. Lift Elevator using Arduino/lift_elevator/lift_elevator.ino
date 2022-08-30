/*
###########################################################
#Lift Elevator interface with Arduino Uno
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
*/
const int button1=10;
const int button2=11;
const int button3=9;
const int button4=12;
int bt1=0;
int bt2=0;
int bt3=0;
int bt4=0;
int var1,var2,var3,var4,var5,var6,var7,var8,var9,var10,p,num;
void setup()
{
/*Buttons intrnally pull up*/
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);

/* set segments pins*/
  pinMode(2, OUTPUT);   
  pinMode(0, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A3, OUTPUT);

/*Led pin setup*/
 pinMode(5, OUTPUT);   
 pinMode(A2, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(A1, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(A0, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(13, OUTPUT);

num=0;
var1=0;
var2=0;
var3=0;
var4=0;
var5=0;
var6=var7=var8=var9=var10=0;
p=1;
}      
void loop()
{
  bt1 = digitalRead(button1);
  bt2 = digitalRead(button2);
  bt3 = digitalRead(button3);
  bt4 = digitalRead(button4);
  if (bt1==0 && var1==0 )//0
  {
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(A3,HIGH);
      if(var6==1)
        {led(4,0);}
      else{
        led(0,0);
      delay(500);;
      var2=var6=0;
      var1=1;
      var4=var5=var3=p=1;
      var7=var8=var9=1;}
  }
  else if(bt2==0 && var6==0)//1
  {
      digitalWrite(2,HIGH);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,HIGH);
      if(var3==1 && p==0)
      { led(4,1);}
      else{
        led(0,1);
      delay(500);
      num=0;
      var1=var3=var7=p=0;
      var6=var5=1;}
  }
  else if(bt3==0 && var3==0)//2
  {
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      if(var5 == 1 && p==1)
      { led(4,2);}
      else{
        led(0,2);
      delay(500);
      var6=var5=var4=p=0;
      var3=var1=1;}
  }
  else if(bt4==0 && var5==0)//3
  {
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,LOW);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(0,3);
      delay(500);
      var1=var6=var5=var4=p=1;
      var3=var9=var8=0;
  }
  else if(bt2==0 && var8==0)//3-1
  {
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(4,2);
      delay(500);
      digitalWrite(2,HIGH);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,HIGH);
      led(4,1);
      delay(500);
      var1=var3=var7=0;
      var8=var5=1;
  }
  else if(bt4==0 && var7==0)//1-3
  {   
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(0,2);
      delay(500);
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,LOW);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(0,3);
      delay(500);
      var3=var8=var9=0;
      var1=var5=var7=1;
  }
  else if(bt1==0 && var9==0)//3-0
  {
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(4,2);
      delay(500);
      digitalWrite(2,HIGH);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,HIGH);
      led(4,1);
      delay(500);
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(A3,HIGH);
      led(4,0);
      delay(500);
      var1=var3=var5=var9=p=1;
      var2=var6=0;
  }
  else if(bt4==0 && var2==0 )//0-3
  {
      digitalWrite(2,HIGH);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,HIGH);
      led(0,1);
      delay(500);
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(0,2);
      delay(500);
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,LOW);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(0,3);
      delay(500);
      var1=var2=var4=var5=var6=1;
      var3=var8=var9=0;
  }
  else if(bt3==0 && var2==0)//0-2
  {
      digitalWrite(2,HIGH);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,HIGH);
      led(0,1);
      delay(500);
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,HIGH);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(A3,LOW);
      led(0,2);
      delay(500);
      var4=var5=var6=p=0;
      var2=var1=var3=1;
  }
  else if(bt1==0 && var4==0)//2-0
  {
      digitalWrite(2,HIGH);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,HIGH);
      digitalWrite(A4,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(A3,HIGH);
      led(4,1);
      delay(500);
      digitalWrite(2,LOW);
      digitalWrite(0,LOW);
      digitalWrite(A5,LOW);
      digitalWrite(1,LOW);
      digitalWrite(A4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(A3,HIGH);
      led(4,0);
      delay(500);
      var1=var3=var5=var7=p=1;
      var8=var9=1;
      var2=var6=0;
  }
}

void led(int m, int ch)
{
  if((m>=0) & (m<=3))
  {
    if(ch == 0)
    {
      digitalWrite(8,HIGH);
      digitalWrite(13,HIGH);
    }
    else if(ch == 1)
    {
      digitalWrite(8,LOW);
      digitalWrite(13,LOW);
      digitalWrite(A0,LOW);
      digitalWrite(7,HIGH);
    }
    else if(ch == 2)
    {
      digitalWrite(7,LOW);
      digitalWrite(A0,LOW);
      digitalWrite(A1,LOW);
      digitalWrite(6,HIGH);
    }
    else if(ch == 3)
    {
      digitalWrite(A1,LOW);
      digitalWrite(6,LOW);
      digitalWrite(A2,LOW);
      digitalWrite(5,HIGH);
    }
  }
  else if(m>3)
  {
    if(ch == 3)
    {
      digitalWrite(A2,LOW);
      digitalWrite(5,HIGH);
    }
    else if(ch == 2)
    {
      digitalWrite(5,LOW);
      digitalWrite(A2,LOW);
      digitalWrite(6,LOW);
      digitalWrite(A1,HIGH);
    }
    else if(ch == 1)
    {
      digitalWrite(6,LOW);
      digitalWrite(A1,LOW);
      digitalWrite(7,LOW);
      digitalWrite(A0,HIGH);
    }
    else if(ch == 0)
    {
      digitalWrite(7,LOW);
      digitalWrite(A0,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(13,HIGH);
    }
  }
}


