#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char name[20],unitPrice[20];
	int quantity=0;
	char YN;
	int num=0;
	ifstream it;
	it.open("Inventory.txt");
	ofstream ot;
	char otfile[] = "New Inventory";
	ot.open(otfile,ios::out);
	if(!it||!ot)
	{cout<<"File not found...\n";
	}
	ot<<"Name"<<"\t"<<"     Quantity"<<"\t"<<"     Unit Price"<<endl;
	while(!it.eof())
	{
		it>>name>>quantity>>unitPrice;
		cout<<name<<": do you want to buy more? (Y/N)? ";
		cin>>YN;
		if(YN=='Y'||YN=='y'){
		cout<<"How much more do you want to buy? ";
		cin>>num;
		ot<<name<<"\t\t"<<(quantity+num)<<"\t\t"<<unitPrice<<endl;}
		else{ot<<name<<"\t\t"<<(quantity+num)<<"\t\t"<<unitPrice<<endl;
		}
		
	}
	it.close();
	ot.close();
	return 0;
}