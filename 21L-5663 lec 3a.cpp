#include <iostream>
using namespace std;

// passing a pointer by value.

void func(int* p)
{
	*p=10;
	//p=20;                     // error occurs if we uncomment this just as the same as you told in the class.
}

void main()
{
	int a=15;
	cout << a << endl;
	int* ptr = &a;
	func(ptr);
	cout << *ptr << endl;

	system("pause");

} // end of main