import random

def computer_selection():
    num = random.randint(1, 100)
    if num <= 33:
        return "s"
    elif num > 33 and num <= 66:
        return "p"
    else:
        return "z"

def result(player, comp):

    if(player == comp):
        return -1;
    else:
        if(player == 's'):
            if(comp == 'z'):
                return 1
            else:
                return 0

        if(player == 'p'):
            if(comp == 's'):
                return 1
            else:
                return 0
        
        if(player == 'z'):
            if(comp == 'p'):
                return 1
            else:
                return 0

print("------------Stone-Paper-Scissor-------------")

print("Stone - s")
print("Paper - p")
print("Scissor - z")

player = input("Enter your choice : ")
player = player.lower()
comp = computer_selection()

val = result(player, comp)

print("\nComputer Choice : ", comp)
print("Your Choice : ", player)

if(val == 1):
    print("\nYou won the match!")
elif(val == 0):
    print("\nComputer won the match!")
else:
    print("\nDraw!!")


print("\n-----------Thanks-For-Playing--------------")