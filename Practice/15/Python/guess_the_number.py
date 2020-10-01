#!/usr/bin/python3
from random import randrange

# Задание 15 - Угадай число

print("15. Угадай число")


def restart():
    if (int(input("Хотите начать сначала? (1 - ДА ): ")) == 1):
        return True
    else:
        return False


while True:
    attempts = 5
    cnum = randrange(101)
    print(cnum)
    for i in range(0, attempts):
        n = int(input('Введите число: '))
        
        if n == cnum:
            print("Поздравляю! Вы угадали")
            if restart(): continue
            else: break
        elif n < cnum:
            print("Загаданное число больше")
        elif n > cnum:
            print("Загаданное число меньше")

    print("Вы проиграли. Было загадано: {}".format(cnum))
    if restart(): continue
    else: break
