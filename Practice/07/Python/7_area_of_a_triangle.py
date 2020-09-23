#!/usr/bin/python3
from math import sqrt

# Задание 7 - Площадь триугольника


class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def length(self, point):
        return sqrt((point.x - self.x)**2 + (point.y - self.y)**2)


def sides_area():
    print("--> Через длины сторон: ")
    a = int(input("Введите сторону a: "))
    b = int(input("Введите сторону b: "))
    c = int(input("Введите сторону c: "))
    p = (a + b + c) / 2
    s = sqrt(p * (p - a) * (p - b) * (p - c))
    return s


def coord_area():
    print("--> Через координаты вершин: ")
    x1, y1 = map(int, input('Координаты первой вершины: ').split(' '))
    x2, y2 = map(int, input('Координаты второй вершины: ').split(' '))
    x3, y3 = map(int, input('Координаты третьей вершины: ').split(' '))
    A = Point(x1, y1)
    B = Point(x2, y2)
    C = Point(x3, y3)
    p = (A.length(B) + A.length(C) + B.length(C)) / 2
    S = sqrt(p*(p - A.length(B))*(p - A.length(C))*(p - B.length(C)))
    return S


if __name__ == "__main__":
    print("7. Площадь триугольника")
    t = int(input("Введите способ решения (1 или 2): "))
    if t == 1:
        print("S: {:.2f}".format(sides_area()))
    elif t == 2:
        print("S: {:.2f}".format(coord_area()))
    else:
        print("[Ошибка] Доступные значение 1 и 2")
