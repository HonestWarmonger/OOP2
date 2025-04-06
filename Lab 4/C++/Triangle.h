#pragma once
#include "Figure.h"

class Triangle : public Figure {
public:
    // Конструктор за замовчуванням
    Triangle();

    // Конструктор із 3 параметрами, де явно викликаємо базовий
    Triangle(double xVal, double yVal, double sideVal);

    // Конструктор копіювання
    Triangle(const Triangle& other);

    // Обчислення площі (для рівностороннього трикутника)
    double area() const;

    // Обчислення периметра
    double perimeter() const;
};