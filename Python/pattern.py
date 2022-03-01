def pattern(num):
    if (num==1):
      print("*")
    else:
        for i in range(num):
            print("*"*(num-i)) 

n = int(input("Enter the number:  "))
N = pattern(n)
