###########################################################
#SWITCHES and LED's interface with Raspberry pi-3
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
import RPi.GPIO as GPIO	#import GPIO library
import time			#import time for time delay

GPIO.setmode(GPIO.BOARD)	#set GPIO as BOARD pins

GPIO.setup(18, GPIO.OUT)	#set LED-1 as output pin-18
GPIO.setup(33, GPIO.OUT)	#set LED-2 as output pin-33
GPIO.setup(16, GPIO.OUT)	#set LED-3 as output pin-16
GPIO.setup(35, GPIO.OUT)	#set LED-4 as output pin-35
GPIO.setup(37, GPIO.OUT)	#set LED-5 as output pin-37
GPIO.setup(24, GPIO.OUT)	#set LED-6 as output pin-24
GPIO.setup(12, GPIO.OUT)	#set LED-7 as output pin-12
GPIO.setup(22, GPIO.OUT)	#set LED-8 as output pin-22

#set switches pins in a array-
switch=[13, 15, 36, 19, 32, 38, 26, 40]

#set swictch pins as input and internally pull-up
for i in range(8):
	GPIO.setup(switch[i], GPIO.IN, pull_up_down=GPIO.PUD_UP)

while(True):
	for i in range(8):
		if GPIO.input(switch[0])==0:	#switch-1==0
			GPIO.output(18, GPIO.LOW)	#LED-1 LOW
		else:
			GPIO.output(18, GPIO.HIGH)	#LED-1 HIGH
		
		if GPIO.input(switch[1])==0:	#switch-2==0
			GPIO.output(33, GPIO.LOW)	#LED-2 LOW
		else:
			GPIO.output(33, GPIO.HIGH)	#LED-2 HIGH
	
		if GPIO.input(switch[2])==0:	#switch-3==0
			GPIO.output(16, GPIO.LOW)	#LED-3 LOW
		else:
			GPIO.output(16, GPIO.HIGH)	#LED-3 HIGH

		if GPIO.input(switch[3])==0:	#switch-4==0
			GPIO.output(35, GPIO.LOW)	#LED-4 LOW
		else:
			GPIO.output(35, GPIO.HIGH)	#LED-4 HIGH
		
		if GPIO.input(switch[4])==0:	#switch-5==0
			GPIO.output(37, GPIO.LOW)	#LED-5 LOW
		else:
			GPIO.output(37, GPIO.HIGH)	#LED-5 HIGH

		if GPIO.input(switch[5])==0:	#switch-6==0
			GPIO.output(24, GPIO.LOW)	#LED-6 LOW
		else:
			GPIO.output(24, GPIO.HIGH)	#LED-6 HIGH

		if GPIO.input(switch[6])==0:	#switch-7==0
			GPIO.output(12, GPIO.LOW)	#LED-7 LOW
		else:
			GPIO.output(12, GPIO.HIGH)	#LED-7 HIGH

		if GPIO.input(switch[7])==0:	#switch-8==0
			GPIO.output(22, GPIO.LOW)	#LED-8 LOW
		else:
			GPIO.output(22, GPIO.HIGH)	#LED-8 HIGH

GPIO.cleanup()
	
