List1 = ["Bro", "pandu", "Nigga", "Dude", 5.5, "6", True]

for index, item in enumerate(List1):
    if index == 2 or index == 4 or index == 6:
       # print(index + 1, item)
       print(f"The value at index {index + 1} in list is {item}")
