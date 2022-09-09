from smbus import SMBus
import time
bus = SMBus(1)
bus.write_byte(0x48,0)
last_reading=-1
while(0==0):
	reading = bus.read_byte(0x48)
	if(abs(last_reading - reading) >2):
		print('output:'+str(reading))
		last_reading = reading
	
