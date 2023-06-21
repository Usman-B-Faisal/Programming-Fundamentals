#include<iostream>
using namespace std;

main()
{
	int a, b;
	cout << "Enter two Integers \n";
	cin >> a >> b;
	if (a % b == 0 && a > b)
		cout << a << " is a multiple of " << b << "\n";
	else if (b % a == 0 && b > a)
		cout << b << " is a multiple of " << a << "\n";
	else if (b % a != 0 || a % b != 0)
		cout << " Neither is a multiple of other \n";
}