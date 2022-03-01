class Hash:
    def __init__(self):
        self.table=[None]*10000

    def hash_value(self, string):
        value = ord(string[0])*100 + ord(string[1])
        return value
    
    def store(self,string):
        hv = self.hash_value(string)
        if hv != -1:
            if self.table[hv] != None:
                self.table[hv].append(string)
            else:
                self.table[hv] = [string]
                
    def lookup(self,string):
        hv = self.hash_value(string)
        if hv != -1:
            if self.table[hv] != None:
                if string in self.table[hv]:
                    return hv
        return -1



if __name__ == '__main__':
    hash = Hash()
    print(hash.hash_value("Fuck you"))
    hash.store("Fuck")
    hash.store("FuckSHit")
    hash.store("Shit")
    hash.store("Ass")
    hash.store("Ass hole")
    hash.store("Madarchod")
    hash.store("Love")
    hash.store("PeaceS")
    print(hash.lookup("PeaceS"))
    print(hash.table[7117])