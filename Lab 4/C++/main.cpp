#include <iostream>
#include "Triangle.h"

int main() {
    double x, y, side;
    std::cout << "Введіть x, y та довжину сторони трикутника: ";
    std::cin >> x >> y >> side;

    // Створення об'єкта похідного класу Triangle
    Triangle tri(x, y, side);

    // Вивід даних
    std::cout << "Координати вершини: ("
        << tri.getX() << ", " << tri.getY() << ")\n";
    std::cout << "Довжина сторони: " << tri.length() << "\n";
    std::cout << "Периметр:       " << tri.perimeter() << "\n";
    std::cout << "Площа:          " << tri.area() << std::endl;

    return 0;
}