using System;

namespace FigureLibrary
{
    public class Triangle : Figure
    {
        // Конструктор за замовчуванням
        public Triangle() : base() { }

        // Конструктор із 3 параметрами
        public Triangle(double xVal, double yVal, double sideVal)
            : base(xVal, yVal, sideVal)
        {
        }

        // Конструктор копіювання
        public Triangle(Triangle other)
            : base(other)
        {
        }

        // Метод обчислення периметра (для рівностороннього трикутника)
        public double Perimeter()
        {
            return 3.0 * side;
        }

        // Метод обчислення площі
        public double Area()
        {
            return (Math.Sqrt(3.0) / 4.0) * side * side;
        }
    }
}