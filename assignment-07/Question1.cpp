// Assignment 7 - Question 1 (Corrected Code)
//
// Error in the given code:
//     Derived *dp = new Base;
// A derived-class pointer cannot point to a base-class object, because a
// Base object does not contain the extra parts of a Derived object.
// (A base-class pointer CAN point to a derived object, so "Base *bp = new Derived;" is fine.)
//
// Fix: make the derived-class pointer point to a Derived object, and free the memory.
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Inside Base class" << endl;
    }

    virtual ~Base() {}
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Inside Derived class" << endl;
    }
};

int main()
{
    Base *bp = new Derived;      // Valid: base pointer to derived object
    Derived *dp = new Derived;   // Corrected: derived pointer to derived object

    cout << "Calling show() using base pointer: ";
    bp->show();

    cout << "Calling show() using derived pointer: ";
    dp->show();

    delete bp;
    delete dp;

    return 0;
}
