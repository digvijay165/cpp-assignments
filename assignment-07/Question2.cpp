// Assignment 7 - Question 2 (Corrected Code)
//
// Error in the given code:
//     data1 and data2 are declared "private" in Base, so the Derived class
//     cannot access them inside show().
//
// Fix: declare data1 and data2 as "protected" so that the derived class
// can access them, while they still stay hidden from outside code.
#include <iostream>
using namespace std;

class Base
{
protected:
    int data1, data2;

public:
    Base(int a = 0, int b = 0) : data1(a), data2(b)
    {
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << " data1 = " << data1 << " data2 = " << data2 << endl;
    }
};

int main(void)
{
    Derived d;
    d.show();
    return 0;
}
