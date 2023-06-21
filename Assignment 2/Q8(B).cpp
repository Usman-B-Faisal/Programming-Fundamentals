// Question 8 Part 2

#include<iostream>
using namespace std;

int main()
{
	int t1 = 0, t2 = 1, nextterm = 0, n, i = 2;
	cout << "Enter the number below which you want to see fibonacci numbers: ";
	cin >> n;
	cout << "Fibonacci series: " << t1 << " " << t2;
	nextterm = t1 + t2;
	while (i < n)
	{
		cout << " " << nextterm;
		t1 = t2;
		t2 = nextterm;
		nextterm = t1 + t2;
		i++;
	}


}
