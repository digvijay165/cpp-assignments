// Assignment 10 - Question 1
// Store the Name, Class and Age of a student in a text file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name, studentClass;
    int age;

    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's class: ";
    getline(cin, studentClass);
    cout << "Enter student's age: ";
    cin >> age;

    ofstream outFile("student_info.txt");
    if (!outFile)
    {
        cout << "Error: could not create 'student_info.txt'" << endl;
        return 1;
    }

    // Structured format: Name, Class, Age
    outFile << name << ", " << studentClass << ", " << age << endl;
    outFile.close();

    cout << "Student details saved to 'student_info.txt' successfully." << endl;
    cout << "'student_info.txt' contains:" << endl;
    cout << name << ", " << studentClass << ", " << age << endl;

    return 0;
}
