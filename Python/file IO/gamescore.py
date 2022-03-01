def game():
    return 55

score = game()

with open("HighScore.txt") as f:
    highscore = f.read()
highs = int(highscore)

if highs< score:
    with open("HighScore.txt","w") as f:
        f.write(str(score))
elif highscore == ' ':
    with open("HighScore.txt","w") as f:
        f.write(str(score))
