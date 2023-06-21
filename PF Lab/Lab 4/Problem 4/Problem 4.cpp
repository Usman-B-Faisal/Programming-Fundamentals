#include <iostream>
#include <string.h>
using namespace std;

int SearchParagraph(char para[][200], int s, char find[])
{ 
	int r = 0, l[2] = { 0 }, len = 0, dummy=0;

	len = strlen(find);

	for (int i = 0; i < s; i++)
	{
		l[i] = strlen(para[i]);
	}
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < l[i]; j++)
		{
			for (int k = 0; k < len; k++)
			{
				if (para[i][j] == find[k])
				{
					dummy++;
				}
				if (dummy == len)
				{
					r++;
				}
			}
		}
	}
	return r;
}

int main()
{
	 char para[][200] = {'\0'}, find[30] = {'\0'};
	 int size = 0, freq=0;

	 cout << "Enter the number of sentences you want to write: ";
	 cin >> size;

	 for (int i = 0; i < size; i++)
	 {
		 cin.ignore();
		 cout << "Enter " << i + 1 << " sentence : ";
	 	 cin.getline(para[i], 199);
	 }

	 cout << "\n enter the word whose frequency you want to see: ";
	 cin.ignore();
	 cin.getline(find, 29);

	 freq = SearchParagraph(para, size, find);

	 cout << "\n Frequency of the word is: "<<freq;
	 
	 return 0;
}

