import serial
import time
ser = serial.Serial('/dev/ttyACM0')
print(ser.name)
time.sleep(1)
print(ser.write(b'z'))
time.sleep(5)
print(ser.write(b'z'))
time.sleep(1)
ser.close()
