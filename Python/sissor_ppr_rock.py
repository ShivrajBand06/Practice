import random

def Gamewin(comp, you):
    if (comp==you):
        return None
    elif (comp == 's'):
        if (you == 'p'):
            return False
        elif (you == 'r'):
            return True
    elif (comp == 'r'):
        if (you == 's'):
            return False
        elif (you == 'p'):
            return True
    elif (comp == 'p'):
        if (you == 'r'):
            return False
        elif (you == 's'):
            return True

print("Computer's Turn: Rock(r) Sissor(s) Papper(p) ")
randNo = random.randint(1,3)
if (randNo == 1):
    comp = 's'
elif (randNo == 2):
    comp = 'r'
elif (randNo == 3):
    comp = 'p'

You = input("Your Turn: Rock(r) Sissor(s) Papper(p) ")
if ((You == 'p')or(You == 'r')or(You == 's')):
    a = Gamewin(comp, You)
else:
    print("Invalid input")

if(a == None):
    print(f"Computer has selected:       {comp}")
    print(f"You have selected:       {You} ")
    print("Game Tied")
elif(a == True):
    print(f"Computer has selected:       {comp}")
    print(f"You have selected:       {You}")
    print("Congratulations!! You are winner")
else:
    print(f"Computer has selected:       {comp} ")
    print(f"You have selected:       {You}")
    print("Badluck! Computer is winner")
