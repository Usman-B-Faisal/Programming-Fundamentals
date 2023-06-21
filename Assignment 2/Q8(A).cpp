// Question 8 Part 1

#include<iostream>
using namespace std;

int main()
{
	int t1 = 0, t2 = 1, nextterm = 0, n, n1, i = 2, m1, m;
	cout << "How many Fibonacci Numbers do you want to ask: ";
	cin >> m ;
	for (int h = 0; h < m; h++)
	{
		cout <<endl<< "Which Fibonacci: ";
		cin >> m1;
		n1 = m1 - 1;
		n = m1 + 1;
		cout << "F" << m1 << "=";
		if (m1 == 0)
			cout << " 0" << endl;
		if (n1 == 0)
			cout << " " << t2;
		else if (n1 == 1)
			cout << "";
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
}
