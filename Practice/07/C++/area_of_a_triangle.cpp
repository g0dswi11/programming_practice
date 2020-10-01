#include <iostream>
#include <cmath>

/* Задание 7 - Площадь триугольника */

using namespace std;

struct point
{
    float x;
    float y;
    float length(point pt)
    {
        return sqrt(pow(pt.x - x, 2.0f) + pow(pt.y - y, 2.0f));
    }
};

float sides_area()
{
    cout << "--> Через длины сторон: " << endl;
    float a, b, c, p, s;
    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    cout << "Введите сторону c: ";
    cin >> c;
    p = (a + b + c) / 2;
    s = p * (p - a) * (p - b) * (p - c);
    return sqrt(s);
}

float coord_area()
{
    cout << "--> Через координаты вершин: " << endl;
    float x1, y1, x2, y2, x3, y3;
    cout << "Координаты первой вершины: ";
    cin >> x1 >> y1;
    cout << "Координаты второй вершины: ";
    cin >> x2 >> y2;
    cout << "Координаты третьей вершины: ";
    cin >> x3 >> y3;
    point A = {x1, y1};
    point B = {x2, y2};
    point C = {x3, y3};
    float p = (A.length(B) + A.length(C) + B.length(C)) / 2;
    float S = sqrt(p * (p - A.length(B)) * (p - A.length(C)) * (p - B.length(C)));
    return S;
}

int main()
{
    cout << "7. Площадь триугольника" << endl;
    cout << "Введите способ решения (1 или 2): ";
    int type = 1;
    cin >> type;
    if (type == 1)
        cout << "S: " << sides_area() << endl;
    else if (type == 2)
        cout << "S: " << coord_area() << endl;
    else
        cout << "[Ошибка] Доступные значение 1 и 2" << endl;
    return 0;
}