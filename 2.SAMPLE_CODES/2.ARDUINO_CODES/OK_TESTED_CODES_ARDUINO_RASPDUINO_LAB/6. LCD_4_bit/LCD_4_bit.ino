                                                                     /*
###########################################################
#LCD(4-bit) interface with Arduino Uno
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1,A5,1,0,2); //(RS,E,D4,D5,D6,D7)

void setup() 
{
    lcd.begin(16, 2);
 }

void loop() 
{
  lcd.setCursor(2,0);
  lcd.print("LOGSUN SYSTEM");
  lcd.setCursor(6,1);
  lcd.print("PUNE"); 
  delay(1000);
  lcd.clear();
  delay(1000);
  
}
