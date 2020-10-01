#!/usr/bin/python3
from math import sqrt

# Задание 6 - Корни уравнения

print('6. Корни уравнения')
a = int(input('Введите значение a: '))
b = int(input('Введите значение b: '))
c = int(input('Введите значение c: '))

if (b*b - 4*a*c) >= 0:
    print('x1: {:.2f}'.format(-1*b + sqrt(b*b - 4*a*c) / (2 * a)))
    print('x2: {:.2f}'.format(-1*b - sqrt(b*b - 4*a*c) / (2 * a)))
elif (b*b - 4*a*c) == 0:
    print('x: {:.2f}'.format(-1*b / 2*a))
else:
    print("Дискриминант меньше 0, корней нет.")
