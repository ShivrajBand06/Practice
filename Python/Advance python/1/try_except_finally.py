try:
    i = int(input("Enter the number: "))
    e = 45/i
    print(e)
except Exception as c:
    print(c)
    exit()
finally:
    print("Programme is done ")

print("Here we are done!!!!!!!!!!!")