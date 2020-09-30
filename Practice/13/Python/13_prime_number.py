#!/usr/bin/python3
from math import sqrt

# Задание 13 - Простое число

print("13. Простое число")

n = int(input('Введите число: '))
e = sqrt(n)

for i in range(2, int(e)):
    if (n % i == 0):
        print('Составное')
        exit(0)

print('Простое')
