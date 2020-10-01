#!/usr/bin/python3

# Задание 11 - Возведение в степень

print("11. Возведение в степень")


def piwpow(base, power):
    """Caoution! This is fucking recursion!"""
    if power == 0:
        return 1
    else:
        return base if power == 1 else base * piwpow(base, power - 1)


print(piwpow(float(input('Основание: ')),
             int(input('Степень: '))))
