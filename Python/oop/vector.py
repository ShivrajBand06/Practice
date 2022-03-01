class C2Dvec:
    def __init__(self,i,j):
        self.icap=i
        self.jcap=j
    
    def __str__(self):
        return (f"{self.icap}i+{self.jcap}j")

class C3Dvec(C2Dvec):
    def __init__(self,i,j,k):
        super().__init__(i,j)
        self.kcap=k

    def __str__(self):
        return (f"{self.icap}i+{self.jcap}j+{self.kcap}k")

v2dvec = C2Dvec(98,45)
v3dvec = C3Dvec(5,99,7)
print(v2dvec, "/n")
print(v3dvec)


