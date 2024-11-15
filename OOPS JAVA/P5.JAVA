abstract class Shape1 
{
    abstract double calculateArea();
    abstract double calculatePerimeter();
}

class Circle extends Shape1 
{
    double radius = 5;
    double calculateArea() 
    {
        return 3.14 * radius * radius;
    }
    double calculatePerimeter() 
    {
        return 2 * 3.14 * radius;
    }
}

class Triangle extends Shape1 
{
    double a = 3, b = 4, c = 5;
    double calculateArea() {
        double s = (a + b + c) / 2;
        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
    }
    double calculatePerimeter() 
    {
        return a + b + c;
    }
}

public class Program6 
{
    public static void main(String[] args) 
    {
        Circle c = new Circle();
        Triangle t = new Triangle();

        System.out.println("Area of the Circle: " + c.calculateArea());
        System.out.println("Perimeter of the Circle: " + c.calculatePerimeter());
        System.out.println("Area of the Triangle: " + t.calculateArea());
        System.out.println("Perimeter of the Triangle: " + t.calculatePerimeter());
    }
}
