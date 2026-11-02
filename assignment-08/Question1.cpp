// Assignment 8 - Question 1
// Demonstrate destructors: called automatically when an object goes out of scope.
#include <iostream>
#include <string>
using namespace std;

class Demo
{
private:
    string name;
    int *data;

public:
    // Constructor: initializes the data members
    Demo(string objName, int value)
    {
        name = objName;
        data = new int(value);
        cout << "Constructor called: object '" << name << "' created with value " << *data << endl;
    }

    void display()
    {
        cout << "Object '" << name << "' holds value " << *data << endl;
    }

    // Destructor: cleans up memory and displays a message
    ~Demo()
    {
        delete data;
        cout << "Destructor called: object '" << name << "' destroyed" << endl;
    }
};

int main()
{
    cout << "Entering main()" << endl;

    Demo obj1("obj1", 10);
    obj1.display();

    {
        cout << endl << "Entering inner block" << endl;
        Demo obj2("obj2", 20);
        obj2.display();
        cout << "Leaving inner block" << endl;
    }   // obj2 goes out of scope here, so its destructor is called

    cout << endl << "Back in main(), about to end the program" << endl;
    return 0;
}   // obj1 goes out of scope here, so its destructor is called
