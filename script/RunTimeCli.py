from email import message
import time
import serial

ser = serial.Serial("COM14", 115200)

while 1:
    data = input("")
    ser.write(bytes(data, 'utf-8'))
    time.sleep(1)

 
