import random
random_number = random.randint(1, 100)
userGuess = None
guesses = 0

while(userGuess != random_number):
    userGuess = int(input("Enter the number: "))
    guesses += 1
    if (userGuess == random_number):
        print("You guessed it right!")
    else:
        if (userGuess > random_number):
            print("You guessed it Wrong!! Enter Lower number please")
        else:
            print("You guessed it Wrong!! Enter Greater number please")

print(f"You have guessed it in {guesses} chances")

with open("highscore.txt","r") as f:
    highscore = int(f.read())

if (guesses < highscore):
    print("You have just broke the highscore!!")
    with open("highscore.txt","w") as f:
        f.write(str(guesses))

