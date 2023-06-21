#include<iostream>
using namespace std;

int main()
{
	char c[100];
	char seg[100];
	cout << "Enter size of array: ";
	int size;
	cin >> size;
	cout << "Enter an array: ";
	for (int i = 0;i<size; i++)
	{
		cin >> c[i];
	}
	cout << "Segregated Array: ";
	for(int j=0;j<size;j++)
	{
		if (c[j] == 'b')
			seg[j] = c[j];
	    else continue;
		cout << seg[j] << " ";
	}
	for(int k=0;k<size;k++)
	{
		if (c[k] == 'm')
			seg[k] = c[k];
	    else continue;
		cout << seg[k] << " ";
	}
	for(int l=0;l<10;l++)
	{
		if (c[l] == 'a')
			seg[l] = c[l];
		else continue;
		cout << seg[l] << " ";
	}
}