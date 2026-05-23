#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    double pi = 3.14159;

public:
    // Default constructor
    Circle()
    {
        radius = 0.0;
    }

    // Constructor with radius
    Circle(double r)
    {
        radius = r;
    }

    // Mutator
    void setRadius(double r)
    {
        radius = r;
    }

    // Accessor
    double getRadius()
    {
        return radius;
    }

    // Area
    double getArea()
    {
        return pi * radius * radius;
    }

    // Diameter
    double getDiameter()
    {
        return radius * 2;
    }

    // Circumference
    double getCircumference()
    {
        return 2 * pi * radius;
    }
};

int main()
{
    double r;

    cout << "Enter radius: ";
    cin >> r;

    Circle c(r);

    cout << "\n--- Circle Details ---\n";
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}
