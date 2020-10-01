#!/usr/bin/python3

# Задание 14 - Степень двойки

print("14. Степень двойки")

n = int(input('n: '))
p, c = 1 * 2, 1

if (n == 0):
    print(0)
else:
    while (p <= n):
        p *= 2
        c += 1
    print(c)
