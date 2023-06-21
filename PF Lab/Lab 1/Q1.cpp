#include <iostream>
using namespace std;

int main()
{
int num,sum=0;
while(num!=(-1))
{
    cout<<"Enter A number: ";
cin>>num;
cout<<"sum of: "<<sum<<" and "<<num<<" is ";
sum=num+sum;
cout<<sum<<endl;
}
}
