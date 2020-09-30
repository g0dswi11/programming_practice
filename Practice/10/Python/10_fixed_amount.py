#!/usr/bin/python3

# Задание 10 - Фиксированная сумма

print("10. Фиксированная сумма")

s, l1, r1, l2, r2 = map(int, input('Введите [s, l1, r1, l2, r2]: ').split(' '))

r2 = max(s - l1, l2) if (l1 + r2) >= s else r2
l1 = min(s - r2, r1) if (l1 + r2) <= s else l1

if (l1 + r2) == s:
    print('x1:{} x2:{}'.format(l1, r2))
else:
    print('-1')
