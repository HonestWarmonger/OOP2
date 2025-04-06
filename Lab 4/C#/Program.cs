using System;
using FigureLibrary;

namespace FigureConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введіть x: ");
            double x = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введіть y: ");
            double y = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введіть довжину сторони: ");
            double side = Convert.ToDouble(Console.ReadLine());

            // Створюємо об'єкт класу Triangle
            Triangle tri = new Triangle(x, y, side);

            Console.WriteLine($"Координати вершини: ({tri.GetX()}, {tri.GetY()})");
            Console.WriteLine($"Довжина сторони: {tri.Length()}");
            Console.WriteLine($"Периметр: {tri.Perimeter()}");
            Console.WriteLine($"Площа: {tri.Area()}");
        }
    }
}