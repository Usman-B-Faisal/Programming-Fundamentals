#include<iostream>
using namespace std;
bool primenumber(int);
int main()
{
	int num[100], stran, enran, n = -1, i = 0, j = 0, count = 1, size;
	cout << "Enter an array. Enter -1 to exit: ";
	for (i = 0;; i++)
	{
		cin >> num[i];
		if (num[i] == n) {
			size = i + 1;
			break;
		};
	}
	cout << "Enter Starting Range Index: ";
	cin >> stran;
	cout << "Enter ending range index ";
	cin >> enran;
	for (i = stran; i < enran ; i++)
	{
		count = 1;
		for (j = i + 1; j < enran; j++)
		{
			if (num[i] == num[j]) {
				count++;
			}
		}
		if (count != 0) {
			if (primenumber(count)) { cout << "Frequency of " << num[i] << " is prime frequency which is " << count << endl; }
			else break;
		}
	}
}
bool primenumber(int n)
{
	bool prime = true;
	if (n == 0 || n == 1) {
		prime = false;
	}
	else {
		for (int k = 2; k < n; k++)
		{
			if (n % k == 0)
			{
				prime = false;
			}
			else if (n == 1)
				prime = false;
		}
	}
	return prime;
}