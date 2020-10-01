#!/usr/bin/python3

# Задание 9 - Встреча

class TimeNotValid(Exception):
    pass


def parse(inp):
    h, m = map(int, inp.split(':'))

    if (h not in range(0, 24)) or (m not in range(0, 60)):
        raise TimeNotValid('[Ошибка] Неверный формат времени!')
    else:
        return h * 60 + m

print("9. Встреча")

t1 = parse(input('Время первого человека: '))
t2 = parse(input('Время второго человека: '))

if abs(t1 - t2) <= 15:
    print('Встреча состоится')
else:
    print('Встреча не состоится')
