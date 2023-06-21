#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	cout<<"1. Encrypt file or 2. Decrypt file?: ";
	int num;
	cin>>num;
	if (num==1)
	{
	char line[100];
	ifstream it;
	it.open("input.txt");
	ofstream ot;
	char output[] = "Encrypted";
	ot.open(output,ios::out);
	if(!it||!ot)        
	{cout<<"File not found...\n";
	}
	         
	int asc;
	int i=0;
    while(!it.eof())
	{
		it>>line[i];
		asc=int(line[i]);
		asc=asc+1;
		line[i]=char(asc);
		if(line[i]!='0')
		ot<<line[i];
	}
	it.close();
	ot.close();
	}
	
	if (num==2)
	{
	char line[100];
	ifstream it;
	it.open("input1.txt");
	ofstream ot;
	char output[] = "Decrypted";
	ot.open(output,ios::out);
	if(!it||!ot)        
	{cout<<"File not found...\n";
	}
	         
	int asc;
	int i=0;
    while(!it.eof())
	{
		it>>line[i];
		asc=int(line[i]);
		asc=asc-1;
		line[i]=char(asc);
		if(line[i]!='0')
		ot<<line[i];
	}
	it.close();
	ot.close();
	}
	return 0;
}