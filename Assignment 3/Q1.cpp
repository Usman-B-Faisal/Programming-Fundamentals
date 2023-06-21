#include<iostream>
using namespace std;

int main()
{
	int num[20] = { 2,10,15,6,10,11,31,87,58,55,3,5,16,19,35,20,12,39,42,17}, usernum,flag=0;
	cout << "Enter a number: ";
	cin >> usernum;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			for (int k = 0; k < 20; k++)
			{
				if (flag > 0)
				break;
				else if (usernum == num[i] + num[j] + num[k])
				{
					flag++;
					cout << "Triplets Whose Sum is " << usernum << " are " << num[i] << " " << num[j] << " and " << num[k] << endl;
					break;
				}
			}
		}
	}
}