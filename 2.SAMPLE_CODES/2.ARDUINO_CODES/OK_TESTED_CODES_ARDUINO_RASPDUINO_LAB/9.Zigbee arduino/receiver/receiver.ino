/*
###########################################################
#XBEE Receiver interface with Arduino Uno
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
*/
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 // put your main code here, to run repeatedly:
if (Serial.available()>0)
{
Serial.write(Serial.read());
}
}
