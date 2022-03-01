
def interchange(newlist):
    size = len(newlist)

    y= newlist[0]
    newlist[0]= newlist[size-1]
    newlist[size-1]= y
    return newlist

    

List =[]
x=0
while(x>(-1)):
    x = int(input("Enter the Number: "))
    List.append(x)
print(List)
print(interchange(List))

