#include <iostream>
using namespace std;

void Input(int*& arr, int& size)       // The parameters are passed by reference to insert and update the array values in
// the main body which will be passed to reverse function and also to update the size of array which is being 
// doubled when the previous array is being filled.
{
	int value = 0;
	int i = 0;

	while (value != -1)               // the loop will be ended when user will enter -1.
	{
		cout << "Enter Value : ";
		cin >> value;
		*(arr+i) = value;
		i++;

		if (i == size-1)
		{
			size = size * 2;                    // this double the size whenever array will be filled completely.
			int* new_array = new int[size];
			for (int i = 0; i < size; i++)
			{
				*(new_array+i) = arr[i];

			}
			delete[] arr;
			arr = new_array;
		}
	}
	
}

void Output(int* iarr, int size)
{
	cout << "Data in reverse order is : ";
	for (int i=1 ; i<size; i++)
	{
		cout << *(iarr+i) << " ";
	}
	cout << endl;
}

void reverse(int* iarr, int size)
{
	int* new_arr = new int[size];
	int count = 0;
	bool flag = false;

	for (int i=size; i>=0; i--)
	{
		if(*(iarr + i) == -1)
			flag = true;

		if(flag)
		{
			*(new_arr + count) = *(iarr + i);
			count++;
		}
	}

	Output(new_arr, count);
}

int main()
{
	cout << "Enter (-1) to Exit and Display data." << endl;
	int size = 5;
	int* arr = new int[size];
	
	Input(arr , size);
	reverse(arr, size); 
	
	system("pause");
	return 0;
}