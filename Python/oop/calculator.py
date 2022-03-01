

class Calculator:

    def Sqr(self,n):
        return (n*n)

    def Cube(self,n):
        return (n*n*n)

    def Sqrt(self, n):
        return (n ** 0.5)

    def Crt(self, n):
        return (n**(1/3))

    @staticmethod
    def greet():
        print("Hello sir")
    
number = Calculator()
number.greet()
Option = int(input("Press 1 for Square \nPress 2 for Cube \nPress 3 for Sqrt \npress 4 for Cube Root\n "))
num = int(input("Enter the number: "))
if Option == 1:
    ans = number.Sqr(num)
    print(ans)
elif Option == 2:
    ans = number.Cube(num)
    print(ans)
elif Option == 3:
    ans = number.Sqrt(num)
    print(ans)
elif Option == 4:
    ans = number.Crt(num)
    print(ans)
else:
    print("Invalid input")
