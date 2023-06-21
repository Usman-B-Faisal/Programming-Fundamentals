#include<iostream>
using namespace std;

int main()
{
	int arr[100],i,j,k,temp,size;
	cout << "Enter an array of 0's and 1's (Enter -1 to exit): ";
	for (i = 0;; i++)
	{
		cin >> arr[i];
		if (arr[i] == -1) {
			size = i + 1;
			break;
		};
	}
	cout << "Array: "<<endl;
	for (i = 0;i<size-1; i++)
	{
		cout << " " << arr[i] << " ";
	}
	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size-1; j++)
		{
			if (arr[k] > arr[j])	
				k = j;
		}
		temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
		
	}
	cout <<endl<< "Segregated Array: "<<endl;
	for (i = 0; i < size-1; i++)
	{
		cout << arr[i] << " ";
	}
}