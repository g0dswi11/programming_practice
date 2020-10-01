#!/usr/bin/python3

# Задание 5 - Падение объекта

print('5. Падение объекта')
x0, v0, t = map(int, input('Введите x0 v0 t: ').split(' '))
g = 9.8
print('{:.1f}'.format(abs(x0 + v0*t - ((g * (t ** 2)) / 2) - x0)))