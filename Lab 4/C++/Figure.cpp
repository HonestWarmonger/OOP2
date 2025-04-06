#include "Figure.h"

Figure::Figure() : x(0), y(0), side(1) {
    // За замовчуванням: вершина (0,0), сторона = 1
}

Figure::Figure(double xVal, double yVal, double sideVal)
    : x(xVal), y(yVal), side(sideVal) {
}

Figure::Figure(const Figure& other)
    : x(other.x), y(other.y), side(other.side) {
}

double Figure::getX() const {
    return x;
}

double Figure::getY() const {
    return y;
}

double Figure::getSide() const {
    return side;
}

double Figure::length() const {
    // Довжина сторони
    return side;
}