# C++ Assignments

[![Build](https://github.com/digvijay165/cpp-assignments/actions/workflows/build.yml/badge.svg)](https://github.com/digvijay165/cpp-assignments/actions/workflows/build.yml)
![C++17](https://img.shields.io/badge/C%2B%2B-17-00599C?logo=cplusplus&logoColor=white)
![Programs](https://img.shields.io/badge/programs-24-informational)

24 C++ programs from ten assignments: loops, strings, functions, classes, overloading, inheritance, destructors, exceptions, file handling, pointers and the STL.

Every program has a screenshot of it running. Each push compiles all of them with `-Wall -Wextra -pedantic -Werror`, so the code stays warning-free.

## What's inside

| Folder | Topic | Programs |
|---|---|---|
| [`assignment-02`](assignment-02) | Loops | Natural numbers 1 to 10, perfect numbers up to 500, GCD with the Euclidean algorithm |
| [`assignment-03`](assignment-03) | Strings | Duplicate characters, find a character's position, count vowels and consonants |
| [`assignment-04`](assignment-04) | Functions | Voting eligibility, calculator with + − × ÷ and ^, `max_two` |
| [`assignment-05`](assignment-05) | Structs and classes | `Student` struct, reverse a number, factorial with a class |
| [`assignment-06`](assignment-06) | Overloading | Function overloading with `sum()`, operator overloading on a `Complex` class |
| [`assignment-07`](assignment-07) | Inheritance | Fix a derived pointer aimed at a base object, fix `private` members a derived class can't reach |
| [`assignment-08`](assignment-08) | Destructors and abstract classes | Destructor called on scope exit, `Shape` area for a rectangle and a triangle |
| [`assignment-09`](assignment-09) | Exception handling | Division by zero, `int` and `char` exceptions |
| [`assignment-10`](assignment-10) | File handling | Write a student's details to a text file, read them back |
| [`assignment-11`](assignment-11) | Pointers and the STL | Every position of a substring using pointers, a linked list with `std::list` |

Each folder holds the `.cpp` files, a screenshot of every program running, and a short README with the questions.

## How to run

You need a C++17 compiler such as g++ (on Windows, MinGW or MSYS2).

```bash
cd assignment-06
g++ -std=c++17 Question2.cpp -o Question2
./Question2
```

In Windows PowerShell, run `.\Question2.exe` instead of `./Question2`.

## A quick look

Operator overloading on a `Complex` class ([assignment 6](assignment-06)):

```text
First complex number  (c1): 5 + 3i
Second complex number (c2): 2 + 7i

Using overloaded + operator, c1 + c2 = 7 + 10i
Using overloaded - operator, c1 - c2 = 3 - 4i
Using overloaded == operator, c1 == c2 is: false
```

Destructors ([assignment 8](assignment-08)): `obj2` is destroyed the moment its block ends, `obj1` only when `main()` returns.

```text
Entering main()
Constructor called: object 'obj1' created with value 10
Object 'obj1' holds value 10

Entering inner block
Constructor called: object 'obj2' created with value 20
Object 'obj2' holds value 20
Leaving inner block
Destructor called: object 'obj2' destroyed

Back in main(), about to end the program
Destructor called: object 'obj1' destroyed
```

## What I learned

- `for` and `while` loops, and the Euclidean algorithm for GCD
- Treating a string as an array: frequency tables and character search
- Splitting a program into small functions with clear return values
- `struct` vs `class`, and keeping data `private`
- Overloading functions by parameter list, and operators like `+`, `-` and `==`
- Why a `Derived*` can't point at a `Base` object, and when to use `protected`
- Destructors, `virtual` functions, and abstract classes with pure virtual methods
- `throw`, `try` and `catch` with standard and built-in exception types
- Writing and reading text files with `ofstream` and `ifstream`
- Walking a string with pointers, and using `std::list` and `std::vector`
