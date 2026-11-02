// Assignment 2 - Question 3
// Find the GCD of two numbers using the Euclidean algorithm.
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int x = (a < 0) ? -a : a;
    int y = (b < 0) ? -b : b;

    // Euclidean algorithm: GCD(x, y) = GCD(y, x % y) until y becomes 0
    while (y != 0)
    {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    cout << "The GCD of " << a << " and " << b << " is: " << x << endl;

    return 0;
}
