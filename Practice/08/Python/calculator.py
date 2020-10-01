#!/usr/bin/python3

# Задание 8 - Калькулятор

print("8. Калькулятор")
while 1:
    try:
        print(eval(input())); break
    except Exception as e: print('[Ошибка] ', e); continue
