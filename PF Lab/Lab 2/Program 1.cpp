#include<iostream>
using namespace std;

void firstlast2(int a[],int size)
{
	cout<<"Enter Values of array: ";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	if(a[0]==2||a[size-1]==2)
			cout<<"True"<<endl;
		else cout<<"False"<<endl;
}
int main()
{
	int array[100], size1;
	cout<<"Enter Size: ";
	cin>>size1;
	firstlast2(array,size1);
	system("pause");
}