a=55
def func1():
    #print(a)
    global a
    print(a)
    a = 99
    print(a)

func1()
print(a)