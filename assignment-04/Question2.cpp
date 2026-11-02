// Assignment 4 - Question 2
// Calculator using functions for +, -, *, / and ^ (power).
#include <iostream>
#include <cmath>
using namespace std;

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

double power(double a, double b)
{
    return pow(a, b);
}

int main()
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            }
            break;
        case '^':
            cout << num1 << " ^ " << num2 << " = " << power(num1, num2) << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
