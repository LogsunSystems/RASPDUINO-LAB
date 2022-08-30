import time
import RPi.GPIO as GPIO
import serial

a = b'A'
b = b'B'
ser = serial.Serial(
    port = '/dev/ttyS0',
    baudrate = 9600,
    parity = serial.PARITY_NONE,
    bytesize = serial.EIGHTBITS,
    timeout = 0.3
    )
while (True):
    ser.write(a)
    time.sleep(3)
    ser.write(b)
    time.sleep(3)
