// Assignment 5 - Question 1
// Demonstrate structures by storing and displaying student information.
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    char grade;
};

void displayStudent(int number, const Student &s)
{
    cout << "Student " << number << ":" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Grade: " << s.grade << endl;
}

int main()
{
    // Initialize two instances of the structure
    Student student1 = {"John Doe", 20, 'A'};
    Student student2 = {"Jane Smith", 22, 'B'};

    displayStudent(1, student1);
    cout << endl;
    displayStudent(2, student2);

    return 0;
}
