namespace FigureLibrary
{
    public class Figure
    {
        protected double x;
        protected double y;
        protected double side;

        // Конструктор за замовчуванням
        public Figure()
        {
            x = 0;
            y = 0;
            side = 1;
        }

        // Конструктор із 3 параметрами
        public Figure(double xVal, double yVal, double sideVal)
        {
            x = xVal;
            y = yVal;
            side = sideVal;
        }

        // Гетери
        public double GetX() { return x; }
public double GetY() { return y; }
public double GetSide() { return side; }

// Метод повертає довжину сторони
public double Length()
{
    return side;
}
    }
}