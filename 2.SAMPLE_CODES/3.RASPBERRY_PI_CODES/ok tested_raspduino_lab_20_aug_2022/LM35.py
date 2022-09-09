import json
import smbus
import time

address = 0x48                # To store data of LM35
A0 = 0x40                     # To read LM35
bus = smbus.SMBus(1)

while True:
    bus.write_byte(address, A0)
    value = bus.read_byte(address)
    print("Temperature is:-", str(value), "Degrees C")
    time.sleep(0.1)
