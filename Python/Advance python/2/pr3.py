def division(m):
    if m%5==0:
        return True
    else:
        return False

List = [i for i in range(500)]
print(list(filter(division, List)))
