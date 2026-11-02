// Assignment 3 - Question 3
// Count the number of vowels and consonants in a string.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for (char ch : str)
    {
        // Ignore digits, spaces and special symbols
        if (isalpha((unsigned char)ch))
        {
            char lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
