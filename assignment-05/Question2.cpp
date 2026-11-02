// Assignment 5 - Question 2
// Find the reverse of a number using a class.
#include <iostream>
using namespace std;

class NumberReverser
{
public:
    long long reverse(long long num)
    {
        bool negative = num < 0;
        if (negative)
        {
            num = -num;
        }

        long long reversed = 0;
        while (num > 0)
        {
            reversed = reversed * 10 + num % 10;   // append last digit
            num /= 10;                             // remove last digit
        }

        return negative ? -reversed : reversed;
    }
};

int main()
{
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    NumberReverser obj;
    cout << "The reverse of the number is: " << obj.reverse(number) << endl;

    return 0;
}
