// Question 8 Part 4

#include<iostream>
using namespace std;

int main()
{
	    int t1 = 0, t2 = 1, nextterm = 0, n, n1, i = 2, m1=0, sum;
	    cout << "Sum of even valued answers of Fibonacci Sequence who values do not exceed 4 million is: ";
		for (sum = 0; m1 <= 33; m1++)
		{
			n1 = m1 - 1;
			n = m1 + 1;
			if (m1 == 0)
			if (n1 == 0)
				cout << " " << t2;
			else if (n1 == 1)
				cout << "";
			nextterm = t1 + t2;
			while (i < n)
			{
				t1 = t2;
				t2 = nextterm;
				if (nextterm % 2 == 0)
				{
					sum = sum + nextterm;
				}
				nextterm = t1 + t2;
				i++;
			}
		}
		cout << sum;

}
