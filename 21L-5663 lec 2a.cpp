#include <iostream>
using namespace std;

// pass by value.

void func(int a)
{
	a=10;
}

void main()
{
	int a=5;
	cout << a << "\n";
	func(a);
	cout << a << "\n";

	system("pause");
}