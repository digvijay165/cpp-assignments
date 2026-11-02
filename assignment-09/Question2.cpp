// Assignment 9 - Question 2
// Demonstrate an integer exception and a character exception.
//   - If the integer input is not a valid integer, an int is thrown   -> catch (int)
//   - If the character input is not a single letter, a char is thrown -> catch (char)
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int readInteger()
{
    string input;
    cout << "Enter an integer: ";
    getline(cin, input);

    size_t start = 0;
    if (!input.empty() && (input[0] == '-' || input[0] == '+'))
    {
        start = 1;
    }

    if (start == input.length())
    {
        throw (int)start;   // integer exception: nothing to read
    }

    for (size_t i = start; i < input.length(); i++)
    {
        if (!isdigit((unsigned char)input[i]))
        {
            throw (int)i;   // integer exception: position of the invalid character
        }
    }

    return stoi(input);
}

char readCharacter()
{
    string input;
    cout << "Enter a character (a letter): ";
    getline(cin, input);

    if (input.length() != 1 || !isalpha((unsigned char)input[0]))
    {
        char invalid = input.empty() ? ' ' : input[0];
        throw invalid;   // character exception
    }

    return input[0];
}

int main()
{
    // Integer exception
    try
    {
        int number = readInteger();
        cout << "Valid integer entered: " << number << endl;
    }
    catch (int position)
    {
        cout << "Integer exception caught: input is not a valid integer "
             << "(problem at position " << position << ")" << endl;
    }

    cout << endl;

    // Character exception
    try
    {
        char ch = readCharacter();
        cout << "Valid character entered: " << ch << endl;
    }
    catch (char invalid)
    {
        cout << "Character exception caught: input is not a single valid character "
             << "(received '" << invalid << "')" << endl;
    }

    return 0;
}
