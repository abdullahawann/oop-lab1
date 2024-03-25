#include <iostream>
using namespace std;
void output(int* myptr, int size)
{
    myptr[0] = 1;
	myptr[1] = 1;
	cout << myptr[0] << " " << myptr[1] << " ";

	for (int i=2; i<size; i++)
	{
		myptr[i] = (myptr[i - 1] + myptr[i - 2]);
		cout << myptr[i] << " ";
	}
}

int main()
{
	int size;
	cout << "Enter the size of fibonnaci series : ";
	cin >> size;
	int* arr = new int[size];
	output(arr, size);
	cout << endl;
	delete []arr;
	arr = NULL;
	
	system("pause"); 
}