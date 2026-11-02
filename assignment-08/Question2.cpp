// Assignment 8 - Question 2
// Calculate the area of a rectangle and a triangle using an abstract class.
#include <iostream>
using namespace std;

// Abstract class: has a pure virtual function, so it cannot be instantiated
class Shape
{
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }

    double area() override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    double length, width, base, height;

    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    Rectangle rect(length, width);
    Shape *shape = &rect;
    cout << "Area of the rectangle: " << shape->area() << endl << endl;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    Triangle tri(base, height);
    shape = &tri;
    cout << "Area of the triangle: " << shape->area() << endl;

    return 0;
}
