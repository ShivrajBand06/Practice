with open("poems.txt","r") as P:
    T= P.read()
if 'Twinkle' or 'twinkle' in T:
    print("Twinkle is present")
else:
    print("Twinkle is not present")
