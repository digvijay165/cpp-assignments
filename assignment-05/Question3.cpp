// Assignment 5 - Question 3
// Find the factorial of a number using a class.
#include <iostream>
using namespace std;

class FactorialCalculator
{
public:
    unsigned long long factorial(int n)
    {
        unsigned long long result = 1;
        for (int i = 2; i <= n; i++)
        {
            result *= i;
        }
        return result;
    }
};

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    FactorialCalculator obj;
    cout << "The factorial of " << number << " is: " << obj.factorial(number) << endl;

    return 0;
}
