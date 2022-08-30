import RPi.GPIO as GPIO
import time
 
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(22, GPIO.IN, pull_up_down=GPIO.PUD_DOWN)
GPIO.setup(24, GPIO.OUT)

while(True):
	if GPIO.input(22)==1:
		GPIO.output(24, GPIO.LOW)
		print("ir detected")
		time.sleep(0.2)
	else:
		GPIO.output(24, GPIO.HIGH)
		print("ir not detected")
