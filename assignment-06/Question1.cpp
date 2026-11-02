// Assignment 6 - Question 1
// Demonstrate function overloading: same function name, different parameters.
#include <iostream>
using namespace std;

// Sum of two integers
int sum(int a, int b)
{
    return a + b;
}

// Sum of two doubles
double sum(double a, double b)
{
    return a + b;
}

// Sum of three integers
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "Example 1: Function with two integers" << endl;
    cout << "Sum of two integers: " << sum(4, 6) << endl << endl;

    cout << "Example 2: Function with two doubles" << endl;
    cout << "Sum of two doubles: " << sum(3.5, 5.0) << endl << endl;

    cout << "Example 3: Function with three integers" << endl;
    cout << "Sum of three integers: " << sum(4, 5, 6) << endl;

    return 0;
}
