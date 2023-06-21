#include<iostream>
using namespace std;

void swapfrontback(int a[], int size)
{
	int b[1];
	cout << "Enter Digits in an array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	cout << "Array before swapping:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "\t";
	}
	b[0] = a[0];
	a[0] = a[0] + a[size - 1] - a[0];
	a[size - 1] = a[size - 1] + b[0] - a[size - 1];
	cout << "\nArray after swapping:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "\t";
	}
}
int main()
{
	int array[100], size;
	cout << "Enter array size: ";
	cin >> size;
	if (size > 0)
		swapfrontback(array, size);
	else cout << "Invalid Input Size must be greater than 0";
}