#!/usr/bin/python3

# Задание 4 = Обмен значениями

print('4. Обмен значениями')
a, b = map(int, input('Введите a и b: ').split(' '))
print('Обмен значений с доп. переменной')
print('До: ', a, b)
c = a
a = b
b = c
print('После: ', a, b)
print('Обмен значений с без доп. переменной')
print('До: ', a, b)
a, b = b, a
print('После: ', a, b)
