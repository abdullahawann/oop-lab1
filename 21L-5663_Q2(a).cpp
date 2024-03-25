#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter size of the fibonacci series : ";
	cin >> size;
	int* arr= new int[size];
	arr[0]=1;
	arr[1]=1;
	cout << arr[0] << " " << arr[1]<< " ";

	for(int i=2; i<size; i++)
	{
		arr[i] = (arr[i-1])+(arr[i-2]);
		cout << arr[i] << " ";
	}

	cout << endl;
	delete []arr;
	arr = NULL;

	system("pause");
	return 0;
}