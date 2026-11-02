// Assignment 11 - Question 1
// Find all starting positions of a substring in a string using pointers.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Returns the starting positions of every occurrence of sub in text
vector<int> findSubstringPositions(const char *text, const char *sub)
{
    vector<int> positions;

    if (*sub == '\0')
    {
        return positions;
    }

    for (const char *p = text; *p != '\0'; p++)
    {
        const char *t = p;     // walks through the main string
        const char *s = sub;   // walks through the substring

        while (*s != '\0' && *t == *s)
        {
            t++;
            s++;
        }

        // Reached the end of the substring, so every character matched
        if (*s == '\0')
        {
            positions.push_back((int)(p - text));   // pointer difference = index
        }
    }

    return positions;
}

int main()
{
    string mainString, subString;

    cout << "Enter main string: ";
    getline(cin, mainString);
    cout << "Enter substring: ";
    getline(cin, subString);

    vector<int> positions = findSubstringPositions(mainString.c_str(), subString.c_str());

    if (positions.empty())
    {
        cout << "Substring '" << subString << "' not found." << endl;
    }
    else
    {
        cout << "Starting positions of substring '" << subString << "':" << endl;
        for (int pos : positions)
        {
            cout << "Position " << pos << endl;
        }
    }

    return 0;
}
