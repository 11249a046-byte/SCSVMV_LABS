package Shape;

public class Circle {
    private int radius;

    public Circle(int r) {
        radius = r;
    }

    public double perimeter() {
        return 2 * 3.14 * radius;
    }

    public double area() {
        return 3.14 * radius * radius;
    }
}