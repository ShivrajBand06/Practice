def Greet(n):
    print(f"Good Morning, {n}")
print(__name__)
if __name__ == "__main__":
    name = input("Enter the name: ")
    Greet(name)