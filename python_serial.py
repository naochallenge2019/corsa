import serial

s = serial.Serial(

    port = 'COM11',
    baudrate = 9600,
    )

s.isOpen()

print("connected to: " + s.portstr)
count = 1

while True:
    for line in s.read():

        print(str(count) + str(': ') + chr(line))
        count = count + 1

s.close()


    
