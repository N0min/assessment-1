import serial
import time
import string
     
# reading and writing data from and to arduino serially.
# rfcomm0 -> this could be different depend on bt communcation port
ser = serial.Serial("/dev/rfcomm0", 9600)

while True:
	command = input("insert command: (ON/OFF):")
	ser.write(command.encode('utf-8'))
