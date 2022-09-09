import time
import RPi.GPIO as GPIO
import serial

ser = serial.Serial(
    port = '/dev/ttyS0',
    baudrate = 9600,
    parity = serial.PARITY_NONE,
    bytesize = serial.EIGHTBITS,
    timeout = 1
    )
while (True):
    x = ser.readline().decode()
    if (len(str(x)) > 0):
        print(x)