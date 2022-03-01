while (True):
    print("Press q to quit")
    a = input("Enter the Number: ")
    if a == 'q':
        break
    try:
        print("Trying......")
        a = int(a)
        if a > 6:
            print("A is Greater than 6")
    except Exception as e :
        print(f"Your function has an Error: {e}")

