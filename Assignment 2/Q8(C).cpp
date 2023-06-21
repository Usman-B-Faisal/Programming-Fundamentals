// Question 8 Part 3

#include<iostream>
using namespace std;

int main()
{
	int t1 = 0, t2 = 1, nextterm = 0, n, n1, i = 2;
	cout << "Enter the number above which you want to see fibonacci numbers: ";
	cin >> n1;
	cout << "Enter the number below which you want to see fibonacci numbers: ";
	cin >> n;
	cout << "Fibonacci series: ";
	if (n1 == 0)
		cout << " " << t2;
	else if (n1 == 1)
		cout << "" ;
	nextterm = t1 + t2;
	while (i < n)
	{
		if (i > n1)
			cout << " " << nextterm;
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		i++;
	}

}
