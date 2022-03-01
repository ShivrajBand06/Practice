abuse =["madarchod","lavde","bhenchod","chut","bsdk","gand","motherfucker","lund"]

with open("abuse.txt") as D:
    content = D.read()
for word in abuse:
    content = content.replace(word,"%^$$%^@#$")

with open("abuse.txt","w") as D:
    D.write(content)

print("sucessfull replaced")