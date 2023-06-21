#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void fun(char First[], int len1, char Second[], int len2);
int main()
{
	char first[20] = { 0 }, second[20] = { 0 };
	int j = 0, k = 0, length1 = 0, length2 = 0;

	ifstream it;
	it.open("assignment.txt");
	if (!it)
	{
		cout << "file not found...\n";
	}
	while (!it.eof())
	{
		it >> first >> second;
		for (int i = 0; i < 20; i++)
		{
			if (first[i] == '\0')
			{
				break;
			}
			else length1++;
		}
		for (int i = 0; i < 20; i++)
		{
			if (second[i] == '\0')
			{
				break;
			}
			else length2++;
		}
		fun(first, length1, second, length2);
		length1 = 0;
		length2 = 0;
	}
	it.close();
	return 0;
}
void fun(char First[], int len1, char Second[], int len2)
{
	char fin[20] = { 0 }, sin[20] = { 0 };
	int j = 0, i = 0, k = 0, count = 0, ascfirst = 0, ascfin = 0, ascsecond = 0, ascsin = 0, asc[20], asc1[20], rep1[20] = { 0 }, rep2[20] = {0};
	// reversing first word
	for (i = 0; i < 20; i++)
	{
		if (First[i + 1] == '\0')
		{
			for (k = i + 1; i >= 0; i--)
			{
				fin[k - i - 1] = First[i];
			}
			break;
		}
	}
	// reversing second word
	k = 0;
	for (i = 0; i < 20; i++)
	{
		if (Second[i + 1] == '\0')
		{
			for (k = i + 1; i >= 0; i--)
			{
				sin[k - i - 1] = Second[i];
			}
			break;
		}
	}
	// Now checking if words are imperfect palindromes
	// for first word
	for (i = 0; First[i] != '\0'; i++)
	{
		ascfirst = First[i];
		ascfin = fin[i];
		if (ascfin == ascfirst);
		else count++;
	}
	if (count == 2)
	{
		cout << "yes ";
	}
	else cout << "no ";
	// for second word
	count = 0;
	for (i = 0; Second[i] != '\0'; i++)
	{
		ascsecond = Second[i];
		ascsin = sin[i];
		if (ascsin == ascsecond);
		else count++;
	}
	if (count == 2)
	{
		cout << "yes ";
	}
	else cout << "no ";
	for (i = 0; i < len1; i++)
	{
		asc[i] = First[i];
	}
	// checking frequency of words for word 1
	k = 0;
	for (i = 0; i < len1; i++)
	{
		count = 0;
		for (j = 0; j < len1; j++)
		{
			if (asc[i] != rep1[j])
			{
				count++;
				if (count == len1)
				{
					rep1[k] = asc[i];
					k++;
				}
			}
		}
	}
	// sorting elements in increasing order for word 1
	for (i = 0; i < len1 && rep1[i] != 0; i++)
	{
		for (j = 0; j < len1; j++)
		{
			int temp = 0;
			if (rep1[i] < rep1[j])
			{
				temp = rep1[i];
				rep1[i] = rep1[j];
				rep1[j] = temp;
			}
		}

	}
	// word 2
	// getting ascii values of elemets of word 2
	for (i = 0; i < len2; i++)
	{
		asc1[i] = Second[i];
	}
	// checking frequency of words for word 2
	k = 0;
	for (i = 0; i < len2; i++)
	{
		count = 0;
		for (j = 0; j < len2; j++)
		{
			if (asc1[i] != rep2[j])
			{
				count++;
				if (count == len2)
				{
					rep2[k] = asc1[i];
					k++;
				}
			}
		}
	}
	// sorting elements in increasing order for word 2
	for (i = 0; i < len2 && rep2[i] != 0; i++)
	{
		for (j = 0; j < len2; j++)
		{
			int temp = 0;
			if (rep2[i] < rep2[j])
			{
				temp = rep2[i];
				rep2[i] = rep2[j];
				rep2[j] = temp;
			}
		}

	}
	// printing whether the program is a super anagram or not
	count = 0;
	for (i = 0; i < len1; i++)
	{
		if (rep1[i] != rep2[i])
		{
			count++;
		}
	}
	if (count == 0)
	{
		cout << "yes " << endl;
	}
	else cout << "no " << endl;
}