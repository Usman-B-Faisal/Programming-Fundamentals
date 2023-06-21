#include <iostream>
using namespace std;
int main()
{
int num,digit=0;
cout<<"Enter Number: ";
cin>>num;
for (;num!=0;num=num/10)
{
digit=num%10;
cout<<digit;
}
cout<<endl;
system ("pause");
}