def multi(num):
    for i in range(10):
        print(f"{num}X{(i+1)}={num*(i+1)}")

num = int(input("Enter the number of which you want table of: "))
multi(num)  