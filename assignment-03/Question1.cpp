// Assignment 3 - Question 1
// Print all the duplicate characters in a string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Array used as a frequency table: one slot for every possible character
    int freq[256] = {0};
    for (char ch : str)
    {
        freq[(unsigned char)ch]++;
    }

    cout << "Duplicate characters in the string are:" << endl;

    bool found = false;
    for (char ch : str)
    {
        unsigned char index = (unsigned char)ch;

        // Spaces are not counted as duplicates
        if (ch != ' ' && freq[index] > 1)
        {
            cout << "'" << ch << "' appears " << freq[index] << " times" << endl;
            found = true;
            freq[index] = 0;   // so the same character is not printed again
        }
    }

    if (!found)
    {
        cout << "No duplicate characters found." << endl;
    }

    return 0;
}
