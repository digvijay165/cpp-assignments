// Assignment 6 - Question 2
// Demonstrate operator overloading using a Complex number class.
#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload + to add two Complex objects
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload - to subtract two Complex objects
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overload == to compare two Complex objects
    bool operator==(const Complex &other) const
    {
        return real == other.real && imag == other.imag;
    }

    void display() const
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 7);

    cout << "First complex number  (c1): ";
    c1.display();
    cout << "Second complex number (c2): ";
    c2.display();

    Complex sum = c1 + c2;          // calls operator+
    Complex difference = c1 - c2;   // calls operator-

    cout << endl << "Using overloaded + operator, c1 + c2 = ";
    sum.display();

    cout << "Using overloaded - operator, c1 - c2 = ";
    difference.display();

    cout << "Using overloaded == operator, c1 == c2 is: "
         << (c1 == c2 ? "true" : "false") << endl;

    return 0;
}
