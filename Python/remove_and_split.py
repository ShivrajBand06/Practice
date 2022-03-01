def remove_and_split(string,word):
    new_str = string.replace(word,"")
    return new_str.strip()

Bro = "               Bro your     are so cool                      "
print(Bro)
bro = remove_and_split(Bro,Bro)
print(bro)