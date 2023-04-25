import time
 
t = time.localtime(time.time())
localtime = time.asctime(t)
time = "" + time.asctime(t)
 
print(time)