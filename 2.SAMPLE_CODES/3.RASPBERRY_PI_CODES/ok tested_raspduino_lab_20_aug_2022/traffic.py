###########################################################
#Traffic Light interface with Raspberry pi-3
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
import RPi.GPIO as GPIO	#import GPIO library
import time

GPIO.setmode(GPIO.BOARD)	#ser GPIO as board pins

#section-1
GPIO.setup(33, GPIO.OUT)	#red-stop
GPIO.setup(36, GPIO.OUT)	#yellow-wait
GPIO.setup(13, GPIO.OUT)	#green-go sraight
GPIO.setup(19, GPIO.OUT)	#green-go left

#section-2
GPIO.setup(10, GPIO.OUT)	#red-stop
GPIO.setup(8, GPIO.OUT)	#yellow-wait
GPIO.setup(16, GPIO.OUT)	#green-go sraight
GPIO.setup(18, GPIO.OUT)	#green-go left

#section-3
GPIO.setup(38, GPIO.OUT)	#red-stop
GPIO.setup(40, GPIO.OUT)	#yellow-wait
GPIO.setup(37, GPIO.OUT)	#green-go sraight
GPIO.setup(35, GPIO.OUT)	#green-go left

#section-4
GPIO.setup(22, GPIO.OUT)	#red-stop
GPIO.setup(24, GPIO.OUT)	#yellow-wait
GPIO.setup(26, GPIO.OUT)	#green-go sraight
GPIO.setup(32, GPIO.OUT)	#green-go left

while(True):
	GPIO.output(33, GPIO.HIGH)	#section-1 red led high 
	GPIO.output(38, GPIO.HIGH)	#section-3 red led high
	GPIO.output(16, GPIO.HIGH)	#section-2 green led high
	GPIO.output(18, GPIO.HIGH)	#section-2 green led high
	GPIO.output(26, GPIO.HIGH)	#section-4 green led high
	GPIO.output(32, GPIO.HIGH)	#section-4 green led high
	time.sleep(5)
	GPIO.output(16, GPIO.LOW)	#section-2 green led low
	GPIO.output(18, GPIO.LOW)	#section-2 green led low
	GPIO.output(26, GPIO.LOW)	#section-4 green led low
	GPIO.output(32, GPIO.LOW)	#section-4 green led low

	#Blink section-2 & section-4 yellow led 5-times
	GPIO.output(8, GPIO.HIGH)
	GPIO.output(24, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(8, GPIO.LOW)
	GPIO.output(24, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(8, GPIO.HIGH)
	GPIO.output(24, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(8, GPIO.LOW)
	GPIO.output(24, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(8, GPIO.HIGH)
	GPIO.output(24, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(8, GPIO.LOW)
	GPIO.output(24, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(8, GPIO.HIGH)
	GPIO.output(24, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(8, GPIO.LOW)
	GPIO.output(24, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(8, GPIO.HIGH)
	GPIO.output(24, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(8, GPIO.LOW)
	GPIO.output(24, GPIO.LOW)
	time.sleep(0.5)

	GPIO.output(33, GPIO.LOW) #section-1 red led low
	GPIO.output(38, GPIO.LOW) #section-1 red led low


	GPIO.output(10, GPIO.HIGH)	#section-2 red led high
	GPIO.output(22, GPIO.HIGH)	#section-4 red led high
	GPIO.output(13, GPIO.HIGH)	#section-1 green led high
	GPIO.output(19, GPIO.HIGH)	#section-1 green led high
	GPIO.output(37, GPIO.HIGH)	#section-3 green led high
	GPIO.output(35, GPIO.HIGH)	#section-3 green led high
	time.sleep(5)
	GPIO.output(13, GPIO.LOW) #section-1 green led low
	GPIO.output(19, GPIO.LOW) #section-1 green led low
	GPIO.output(37, GPIO.LOW) #section-3 green led low
	GPIO.output(35, GPIO.LOW) #section-3 green led low

	#Blink section-1 & section-3 yellow led 5-times
	GPIO.output(36, GPIO.HIGH)
	GPIO.output(40, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(36, GPIO.LOW)
	GPIO.output(40, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(36, GPIO.HIGH)
	GPIO.output(40, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(36, GPIO.LOW)
	GPIO.output(40, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(36, GPIO.HIGH)
	GPIO.output(40, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(36, GPIO.LOW)
	GPIO.output(40, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(36, GPIO.HIGH)
	GPIO.output(40, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(36, GPIO.LOW)
	GPIO.output(40, GPIO.LOW)
	time.sleep(0.5)
	GPIO.output(36, GPIO.HIGH)
	GPIO.output(40, GPIO.HIGH)
	time.sleep(0.5)
	GPIO.output(36, GPIO.LOW)
	GPIO.output(40, GPIO.LOW)
	time.sleep(0.5)

	GPIO.output(10, GPIO.LOW)	#section-2 red led low
	GPIO.output(22, GPIO.LOW)	#section-4 red led low

