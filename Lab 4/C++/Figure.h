#pragma once

class Figure {
protected:
    double x;     // Координата вершини
    double y;     // Координата вершини
    double side;  // Довжина сторони

public:
    // Конструктор за замовчуванням
    Figure();

    // Конструктор із 3 параметрами
    Figure(double xVal, double yVal, double sideVal);

    // Конструктор копіювання
    Figure(const Figure& other);

    // Гетери
    double getX() const;
    double getY() const;
    double getSide() const;

    // Метод для повернення довжини сторони
    double length() const;
};
Figure.cpp