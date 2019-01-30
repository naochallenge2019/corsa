import serial

ser = serial.Serial(

    port = 'COM11',
    baudrate = 9600,
    )

ser.isOpen()

print("connected to: " + ser.portstr)
count = 1

while True:
    for line in ser.read():

        print(str(count) + str(': ') + chr(line))
        count = count + 1

ser.close()


    
