import math
def isprime(n):
    i=0
    prime = 1
    for i in range(math.sqrt(n)):
        if n%i == 0:
            prime=0
    
    if(prime):
        print(f"{n} is Prime Number.")
    else:
        print(f"{n} is Composite Number.")


num = int(input())
isprime(num)