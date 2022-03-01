with open("donkey.txt") as D:
    content = D.read()

content = content.replace("donkey","%^$$%^@#$")

with open("donkey.txt","w") as D:
    D.write(content)
print("sucessfull replaced")