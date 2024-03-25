#include <iostream>
using namespace std;
int main()
{
	int size;
	float largest=0;
	float seclargest=0;
	int index;

	cout << "Enter the size of array : ";
	cin >> size;
	float* arr = new float[size];           // Initializig and declaring dynamic array.
	for (int i=0; i<size; i++)
	{
		cout << "Please enter " << i + 1 << " element of array : ";
		cin >> arr[i];
	}

	for (int i=0; i<size; i++)
	{
		if (arr[i] > largest)
			largest = arr[i];
	}

	for (int i=0; i<size; i++)
	{
		if (arr[i] > seclargest)
		{
			if (arr[i] == largest)
			continue;
			seclargest = arr[i];
			index = i;
		}
	}	
	
	cout << endl;
    cout << "Second largest element is : " << seclargest << endl;
	cout << "Index of second largest element is : " << index << endl;
	            
	delete []arr;
	arr = NULL;

	system("pause");
	return 0;
}