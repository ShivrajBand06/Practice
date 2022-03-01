g10 = lambda num: num > 5


def num_greaterthan4(num):
    if num > 4:
        return True
    else:
        return False


List1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 44,
         5, 5, 6, 4, 64, 6, 11, 53, 65, 56, 5, ]
print(list(filter(num_greaterthan4, List1)))
print(list(filter(g10, List1)))