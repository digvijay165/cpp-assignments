// Assignment 2 - Question 2
// Find the perfect numbers between 1 and 500.
// A perfect number equals the sum of its proper divisors (excluding itself).
#include <iostream>
using namespace std;

int main()
{
    cout << "The perfect numbers between 1 to 500 are: ";

    for (int num = 1; num <= 500; num++)
    {
        int sum = 0;

        // Add every proper divisor of num
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}
