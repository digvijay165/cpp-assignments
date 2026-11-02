// Assignment 9 - Question 1
// Demonstrate exception handling for division by zero.
#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double numerator, double denominator)
{
    if (denominator == 0)
    {
        throw runtime_error("Division by zero not possible");
    }
    return numerator / denominator;
}

int main()
{
    double numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        double result = divide(numerator, denominator);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
