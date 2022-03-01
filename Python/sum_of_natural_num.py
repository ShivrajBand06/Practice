def sum(num):
    if(num<=1):
        return num
    else:
        Num = (num+sum(num-1))
    
    return Num


n = int(input("Enter the number: "))
N = sum(n)
print(f"The sum of first {n} numbers is {N}")