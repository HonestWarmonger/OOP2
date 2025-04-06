#include "Triangle.h"
#include <cmath>

Triangle::Triangle() : Figure() {
    // Виклик базового конструктора за замовчуванням
}

Triangle::Triangle(double xVal, double yVal, double sideVal)
    : Figure(xVal, yVal, sideVal) {
    // Явний виклик конструктора базового класу
}

Triangle::Triangle(const Triangle& other)
    : Figure(other) {
    // Виклик копіюючого конструктора базового класу
}

double Triangle::area() const {
    // Формула площі рівностороннього трикутника: (sqrt(3)/4)*side^2
    return (std::sqrt(3.0) / 4.0) * side * side;
}

double Triangle::perimeter() const {
    return 3.0 * side;
}