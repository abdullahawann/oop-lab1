#include<iostream>
using namespace std;

void copyArray(int* arr, int*& arr1, int size, int startsize)
{
	for(int i=startsize,j=0; i<size; i++,j++)
	{
		arr1[j] = arr[i];
	}
}

int reduceArray(int* arr, int*& arr1, int size)
{
	int reducedsize, startsize;
	cout << "Please enter the reduced size of array : ";
	cin >> reducedsize;
	startsize = size - reducedsize;
	copyArray(arr,arr1,size,startsize);
	delete []arr;
	arr = NULL;

	cout << "Array after reduction is : ";
	for(int i=0; i<reducedsize; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;

	return 0;
}

int main()
{
	int size;
	cout << "Enter size of the array : ";
	cin >> size;
	int* arr = new int[size];
	int* arr1 = new int[size];

	for(int i =0;i<size;i++)
	{
		cout << "Enter " << i+1 << " element of array : ";
		cin >> arr[i];
	}
	reduceArray(arr , arr1, size);

	system("pause");
	return 0;
}