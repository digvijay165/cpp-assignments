// Assignment 10 - Question 2
// Read the content of 'student_info.txt' and display it on the console.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile("student_info.txt");

    if (!inFile)
    {
        cout << "Error: could not open 'student_info.txt'." << endl;
        cout << "Run Question 1 first so the file is created." << endl;
        return 1;
    }

    cout << "Content from 'student_info.txt':" << endl;

    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
