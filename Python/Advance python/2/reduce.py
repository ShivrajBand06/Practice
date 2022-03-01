from functools import reduce

sum = lambda a,b : a+b

l = [1, 2, 4, 5, 56, 785, 52, 12, 25]
val = reduce(sum,l)
print(val)