def increment(num):
    try:
        return float(num)+1
    except:
        raise ValueError("That's not Good")

a = increment(55)
print(a)
a = increment('b')
print(a)