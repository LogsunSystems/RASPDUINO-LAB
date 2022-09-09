###########################################################
#Stepper Motor interface with Raspberry pi-3
#Compony Name- Logsun Systems
#Developer- Yogesh Gunjal
###########################################################
import RPi.GPIO as GPIO    #import GPIO library
import time                #import time for delay
count=1
run=0
GPIO.setmode(GPIO.BOARD)    #set GPIO as board pins
GPIO.setwarnings(False)
GPIO.setup(26, GPIO.OUT)    #set motor i/p-1 as output
GPIO.setup(12, GPIO.OUT)    #set motor i/p-2 as output
GPIO.setup(32, GPIO.OUT)    #set motor i/p-3 as output
GPIO.setup(10, GPIO.OUT)    #set motor i/p-4 as output

GPIO.setup(36, GPIO.OUT)    #set motor en-1 as output
GPIO.setup(13, GPIO.OUT)    #set motor en-2 as output

#set button pins as input with internal pull up-
GPIO.setup(33, GPIO.IN, pull_up_down=GPIO.PUD_UP) #start
GPIO.setup(37, GPIO.IN, pull_up_down=GPIO.PUD_UP) #stop
#GPIO.setup(35, GPIO.IN, pull_up_down=GPIO.PUD_UP) #decrement
#GPIO.setup(22, GPIO.IN, pull_up_down=GPIO.PUD_UP) #increment
GPIO.setup(18, GPIO.IN, pull_up_down=GPIO.PUD_UP) #reverse

#set motor pins high-low for forward-reverse rotation-
#FORWARD-
def rotation():
        if(DIR==0):
            for y in range(count):
                GPIO.output(10, GPIO.LOW)
                GPIO.output(12, GPIO.LOW)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(26, GPIO.HIGH)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(32, GPIO.LOW)
                GPIO.output(12, GPIO.LOW)
                GPIO.output(26, GPIO.HIGH)
                GPIO.output(10, GPIO.HIGH)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(12, GPIO.HIGH)
                GPIO.output(26, GPIO.LOW)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(26, GPIO.LOW)
                GPIO.output(12, GPIO.HIGH)
                GPIO.output(32, GPIO.HIGH)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(10, GPIO.LOW)
                GPIO.output(12, GPIO.HIGH)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(26, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(32, GPIO.HIGH)
                GPIO.output(12, GPIO.HIGH)
                GPIO.output(26, GPIO.LOW)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(12, GPIO.LOW)
                GPIO.output(26, GPIO.LOW)
                GPIO.output(32, GPIO.HIGH)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(26, GPIO.LOW)
                GPIO.output(12, GPIO.LOW)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(10, GPIO.HIGH)
                time.sleep(0.02)
        #REVERSE
        if(DIR == -1):
            for y in range(count):
                GPIO.output(10, GPIO.HIGH)
                GPIO.output(12, GPIO.LOW)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(26, GPIO.HIGH)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(32, GPIO.HIGH)
                GPIO.output(12, GPIO.LOW)
                GPIO.output(26, GPIO.LOW)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(12, GPIO.HIGH)
                GPIO.output(26, GPIO.HIGH)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(26, GPIO.LOW)
                GPIO.output(12, GPIO.HIGH)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(10, GPIO.LOW)
                GPIO.output(12, GPIO.HIGH)
                GPIO.output(32, GPIO.HIGH)
                GPIO.output(26, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(32, GPIO.LOW)
                GPIO.output(12, GPIO.LOW)
                GPIO.output(26, GPIO.HIGH)
                GPIO.output(10, GPIO.LOW)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(12, GPIO.LOW)
                GPIO.output(26, GPIO.LOW)
                GPIO.output(32, GPIO.HIGH)
                GPIO.output(10, GPIO.HIGH)
                time.sleep(0.02)
            for y in range(count):
                GPIO.output(26, GPIO.LOW)
                GPIO.output(12, GPIO.LOW)
                GPIO.output(32, GPIO.LOW)
                GPIO.output(10, GPIO.HIGH)
                time.sleep(0.02)

while(True):
    if(GPIO.input(33)==0):         #if start pressed
        DIR=0
        GPIO.output(36, GPIO.HIGH) #en-1 HIGH
        GPIO.output(13, GPIO.HIGH) #en-2 HIGH
        count=1
        run=1                      #rotate in forward direction
        time.sleep(0.3)

    elif(GPIO.input(18) == 0):       #if rev pressed
        DIR= ~DIR                      #rotate in reverse direction
        time.sleep(0.3)

    elif(GPIO.input(37)==0):       #if stop is pressed
        GPIO.output(36, GPIO.LOW)
        GPIO.output(13, GPIO.LOW)
        GPIO.output(26, GPIO.LOW)
        GPIO.output(32, GPIO.LOW)
        GPIO.output(12, GPIO.LOW)
        GPIO.output(10, GPIO.LOW)  #motor stops rotating
        time.sleep(0.3)
    
    if(run)==1:
        rotation() #function call for motor rotation



