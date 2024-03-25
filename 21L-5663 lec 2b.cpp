#include <iostream>
using namespace std;

// pass by reference.

void func2(int &a)
{
	a=10;
}

void main()
{
	int a=5;
	cout << a << "\n";
	func2(a);
	cout << a << "\n";

	system("pause");
}