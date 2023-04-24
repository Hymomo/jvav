import time
import math
import difflib

t = time.localtime(time.time())
localtime = time.asctime(t)
times = "当前时间:" + time.asctime(t)

time = ["time","str","now","时间","当前时间","时"]
helps = "help\nThis list","exit\nback to last UI","cmd\nNot Found","exit\nExit or quit"
y = ["yes","y","ye","yea","ya","yeah","yep"]

while True:
    Pan = input("what are you want to use AOM?(C,D,E,F,G,X,A,MIO)")
    if Pan in ["C","D","E","F","G","X","A","MIO"]:
        break;
    else:
        print("It's not is a true Pan")
        
        
def debug():
    print("debug is running")
    
    while True:
        b = input("[DebugMode][times][PYTHON] >> Starting...")
        break;
        
       
while True:
    a = input("$Pan:\\")
    if a == "help":
        print(helps)
    elif a == "cmd":
        print("Command(cmd) is not have mean")
    elif a in time:
        print(times)
    elif a == "exit":
        break
    elif a == "debug":
        adbp = input("Are you sure you want to use debug command? ")
        if adbp in y:
            print("Is find adb download road...")
            print("using now")
            debug();
            
        else:
            
            print("What are your mean?")
            
    elif a == "math":
        while True:
            fun = input("please type the function(+,-,*,/,exit):")
            if fun == "+":
                fun1 = float(input("please type first number"))
                fun2 = float(input("please type the second number"))
                funy = input("y/n? ")
                if funy == y:
                    funre = fun1 + fun2
                    print("Re:",funre)                    
                else:
                    print("No re.")                                
            elif fun == "*":
               fun1 = float(input("please type first number"))
               fun2 = float(input("please type the second number"))
               funy = input("y/n? ")
               if funy == y:
                   funre = fun1 * fun2
                   print("Re:",funre)                    
               else:
                   print("No re.")  
            elif fun == "-":
                fun1 = float(input("please type first number"))
                fun2 = float(input("please type the second number"))
                funy = input("y/n? ")
                if funy == y:
                    funre = fun1 - fun2
                    print("Re:",funre)                    
                else:
                    print("No re.") 
            elif fun == "/":
                fun1 = float(input("please type first number"))
                fun2 = float(input("please type the second number"))
                if fun2 == 0:
                    print("You can't use 0 as second number in /")
                    break;
                    
                else:              
                    funy = input("y/n? ")
                    if funy == y:
                        funre = fun1 / fun2
                        print("Re:",funre)
                    else:
                        print("No re.")
            elif fun == "exit":
                break;                 
            else:
                print("No re.")
            
            
            
            



    else:    
        print("No Command like : ",a," ,please write other command, if you have questions and you can type \"help\" for help")

    
    
    
    