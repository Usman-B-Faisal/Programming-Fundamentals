// Question 6 Part 2

#include <iostream>
using namespace std;

bool primenumber(int);

int main()
{
    int num;
    int h;
    cout<<"Enter number of inputs: ";
    cin>>h;
    for (h;h>0;h--)
    {cout<<"Enter Number: ";
    cin>>num;
    if (primenumber(num))
    cout<<num<<" is a prime number"<<endl;
    else cout<<num<<" is not a prime number"<<endl;
    
}
}

bool primenumber(int n)
{
    bool prime=true;
    for(int i=2;i<n;i++)
    if (n%i==0)
    {
        prime=false;
    }
    return prime;
}