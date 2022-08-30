###########################################################
#Keypad and LCD interface with Raspberry pi-3
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
import RPi.GPIO as GPIO		#import GPIO library
from RPLCD.gpio import CharLCD	#import LCD library
import time				#import time delay library
GPIO.setmode(GPIO.BOARD)		#set GPIO as BOARD pins

#set LCD rs,en, and data pins-

lcd = CharLCD(pin_rs=19, pin_e=38, pins_data=[5,8,10,12], numbering_mode=GPIO.BOARD)
lcd.write_string('KEY PRESSED:') # display on LCD

#create MATRIX for KEY identification.... 

MATRIX = [ ['F','E','D','C'],
		['B','A','9','8'],
           ['7','6','5','4'],
           ['3','2','1','0'] ]
 
ROW= [13, 36, 32, 26] #input pins for keypad row
COL= [24, 22, 18, 16] #output pins for keypad column

for j in range(4):	#for loop
        GPIO.setup(COL[j], GPIO.OUT) #set column pins as OUTPUT
        GPIO.output(COL[j], 1)		# set all pins HIGH

#set row pins as input pins-
for i in range(4):	for loop
        GPIO.setup(ROW[i], GPIO.IN, pull_up_down=GPIO.PUD_UP)

#Read keypad keys and display on LCD-
try:
    while(True):
         for j in range(4):
                 GPIO.output(COL[j], 0)
                 for i in range(4):
                         if GPIO.input(ROW[i])==0:
                                print MATRIX[i][j]
                                lcd.cursor_pos = (0, 12)
                                lcd.write_string (MATRIX[i][j])
                                time.sleep(0.2)
                                while(GPIO.input(ROW[i]) == 0):
                                        pass
                 GPIO.output(COL[j], 1)
except KeyboardInterrupt:
        GPIO.cleanup()



