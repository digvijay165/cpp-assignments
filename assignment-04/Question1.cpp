// Assignment 4 - Question 1
// Use a function to check whether a person is eligible to vote.
#include <iostream>
using namespace std;

// Returns true if the person is 18 or older
bool isEligibleToVote(int age)
{
    return age >= 18;
}

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (isEligibleToVote(age))
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
