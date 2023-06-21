#include <iostream>
using namespace std;

int main()
{
	int num[20], i, j, k, temp = 0, len = 0, n = -99, distinctarray[20], uniquearray[20];
	cout << "Enter an array. Enter -99 to exit: ";
	for (i = 0; i < 20; i++)
	{
		cin >> num[i];
		if (num[i] == n) {
			len = i + 1;
			break;
		}
	}
	for (i = 0, k = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (num[i] == num[j]) {
				distinctarray[k] = num[i];
				if (distinctarray[k] == temp)
				{
					break;
				}
				else {
					temp = distinctarray[k];
					k++;
					break;
				}
			}

		}

	}
	cout << "Distinct Array: \n";
	for (i = 0; i < k; i++)
	{
		cout << " " << distinctarray[i];
	}
	cout << "\nOther Elements in array are unique elements";
	
}