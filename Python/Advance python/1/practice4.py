try:
    a = int(input("Enter the Divident number : "))
    b = int(input("Enter the Divisior number : "))
    print(f"{a} ÷ {b} = {a/b}")
except ZeroDivisionError:
    print(f"{a} ÷ {b} = ∞")