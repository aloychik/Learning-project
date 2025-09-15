#Task: roll dice
#Ask if you would like to roll (y/n)
# Generate a numbder from 1 to 20
# if user enter n - stop and thank
#Print and invalid
# if it's 1 or 20 - add message " Crying is a free action" OR " Feeling like a GOD"
import random

while True:
    choice = input("Would you like roll the dice?(y/n):").lower()
    if choice == 'y':
        dice = random.randint(1, 20)
        print(f'({dice})')
        if dice == 20:
            print('Feeling like a GOD')
        elif dice == 1:
            print('Crying is a free action')
    elif choice == 'n':
        print('Thank you for rolling dice, now do pass the dice to other player!')
        break
    else:
        print ('Invalid choice!')
