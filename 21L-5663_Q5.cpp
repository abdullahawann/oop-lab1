#include <iostream>
using namespace std;

void input(int* arr, int size)
{
	for(int i=0; i<size; i++)
	{
		cout << "Enter element " << i+1 << " of array : ";
		cin>>arr[i];
	}
}
int* compression(int* arr, int& size)
{
	int size1=0;
	int* arr1 = new int[size1];

	for(int i=0,j=0; i<size; i++)
	{
		if(arr[i] != arr[i+1])
		{
			arr1[j]=arr[i];
			j++;
			size1++;
		}
	} 
	size = size1;

	return arr1;
}


void output(int* p2, int size)
{
	for(int i=0; i<size; i++)
	{
		cout << p2[i] << " ";
	}
	cout << endl;
}

int main()
{
	int size;
    cout << "Enter size of array : ";
    cin >> size;
	cout << endl;
    int* cl = new int[size];

    input(cl, size);           // This will take the array elements from the user.

    int* p2 = compression(cl, size);          // Compressing the array.

	cout << endl;
    cout << "Array after compression will be : ";
    output(p2, size);

    system("pause");
    return 0;
}