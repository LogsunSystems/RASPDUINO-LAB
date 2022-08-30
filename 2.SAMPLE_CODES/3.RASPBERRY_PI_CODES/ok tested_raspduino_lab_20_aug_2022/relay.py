###########################################################
#Relay interface with Raspberry pi-3
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
import RPi.GPIO as GPIO #GPIO LIBRARY
import time		   #delay time

GPIO.setmode(GPIO.BCM) #set GPIO as board pins
GPIO.setwarnings(False)

GPIO.setup(24, GPIO.OUT) #relay pin as output pin

index = 1

while(index == 1):
	GPIO.output(24, GPIO.LOW) #relay on
	time.sleep(1)		      #delay 1sec
	GPIO.output(24, GPIO.HIGH)  #relay off
	time.sleep(1)		      #delay 1 sec

GPIO.cleanup()
