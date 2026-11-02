// Assignment 4 - Question 3
// Find the maximum of two numbers using a function named max_two.
#include <iostream>
using namespace std;

double max_two(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "The maximum of " << num1 << " and " << num2 << " is: " << max_two(num1, num2) << endl;

    return 0;
}
