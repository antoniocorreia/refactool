import uuid
import time

count = 0
while (count < 10):
    print (uuid.uuid1())

    count = count + 1

count = 0
while (count < 10):


    var_timestamp = "var" + str(time.time()).replace('.','')[-7:]
    print(var_timestamp)
    count = count + 1


count = 0
while (count < 10):

    print(str(uuid.uuid4()).replace('-',''))


    count = count + 1


