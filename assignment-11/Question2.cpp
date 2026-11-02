// Assignment 11 - Question 2
// Implement a linked list using the STL list container.
#include <iostream>
#include <list>
using namespace std;

// Add an element to the end of the linked list
void addElement(list<int> &linkedList, int value)
{
    linkedList.push_back(value);
}

// Display all elements of the linked list
void displayList(const list<int> &linkedList)
{
    cout << "Elements in the linked list:" << endl;
    for (int value : linkedList)
    {
        cout << value << endl;
    }
}

int main()
{
    list<int> linkedList;

    addElement(linkedList, 10);
    addElement(linkedList, 20);
    addElement(linkedList, 30);
    addElement(linkedList, 40);
    addElement(linkedList, 50);

    displayList(linkedList);

    return 0;
}
