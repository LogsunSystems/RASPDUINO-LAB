#include <Keypad.h>
#include <LiquidCrystal.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'F','E','D','C'},
  {'B','A','9','8'},
  {'7','6','5','4'},
  {'3','2','1','0'}
};
byte rowPins[ROWS] = {10,9,8,7}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,5,4,3}; //connect to the column pinouts of the keypad
LiquidCrystal lcd(A0, A1,A5,1,0,2);//(RS,E,D4,D5,D6,D7)
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
 lcd.begin(16,2);
 lcd.setCursor(2,0);
 lcd.print("LOGSUN SYSTEM");
 lcd.setCursor(6,1);
 lcd.print("PUNE"); 
 delay(1000);
 lcd.clear();
 lcd.setCursor(1,0);
 lcd.print("PRESS KEY :");
  
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key){
     lcd.setCursor(1,0);
 lcd.print("PRESS KEY :");
  lcd.print(key);
    
  }
}
