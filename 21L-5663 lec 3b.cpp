#include <iostream>
using namespace std;

// Passing pointer by reference and const keyword.

void func(const int* & p)
{
        *p = 20;
        p = 20;            // using const keyword is also showing error and there is no output.
}

void main()
{
        int a = 10;
        cout << a << endl;
        int *p1 = &a;
        func(p1);
        cout << *p1 << endl;
}