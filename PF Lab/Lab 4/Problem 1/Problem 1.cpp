#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int Num=0;
	ifstream it;
	it.open("Numbers.txt");
	ofstream ot;
	char even[] = "Even.txt";
	ot.open(even,ios::app);
	ofstream output;
	char odd[] = "Odd.txt";
	output.open(odd,ios::app);
	if(!it||!ot||!output) 
	{cout<<"File not found...\n";
	}
	while(!it.eof())
	{
		it>>Num;
		if((Num%2)==0)
		{
			ot<<Num<<endl;
			
		}
		else if((Num%2)!=0)
		{
			output<<Num<<endl;
		}
	}
	it.close();
	ot.close();
	output.close();
	return 0;
}