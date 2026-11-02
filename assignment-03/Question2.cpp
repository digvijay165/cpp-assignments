// Assignment 3 - Question 2
// Check whether a character is present in a string and find its position.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to search: ";
    cin >> ch;

    int position = -1;
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (str[i] == ch)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
    {
        cout << "The character '" << ch << "' is present in the string." << endl;
        cout << "It is found at position (index): " << position << endl;
    }
    else
    {
        cout << "The character '" << ch << "' does not exist in the string." << endl;
    }

    return 0;
}
