import RPi.GPIO as GPIO
import time
#GPIO.setwarnings(False)
x=1
GPIO.setmode(GPIO.BOARD)
GPIO.setup(36, GPIO.OUT)
GPIO.setup(26, GPIO.OUT)
GPIO.setup(12, GPIO.OUT)

GPIO.setup(35, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(22, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(33, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(37, GPIO.IN, pull_up_down=GPIO.PUD_UP)
GPIO.setup(18, GPIO.IN, pull_up_down=GPIO.PUD_UP)

p=GPIO.PWM(36,100)
p.start(0)
while(True):
	p.ChangeDutyCycle(x)
	if GPIO.input(33)==0:
		GPIO.output(26, GPIO.LOW)
		GPIO.output(12, GPIO.HIGH)
		time.sleep(0.5)
	if GPIO.input(35)==0:
               if(x<60):
			x=x+1
			time.sleep(0.2)
        if GPIO.input(22)==0:
               if(x>0):
			x=x-1
			time.sleep(0.2)
        if GPIO.input(18)==0:
                GPIO.output(12, GPIO.LOW)
                GPIO.output(26, GPIO.HIGH)
                time.sleep(0.5)

        if GPIO.input(37)==0:
                GPIO.output(36, GPIO.LOW)
                GPIO.output(26, GPIO.LOW)
                GPIO.output(12, GPIO.LOW)
                time.sleep(0.5)



GPIO.cleanup()
