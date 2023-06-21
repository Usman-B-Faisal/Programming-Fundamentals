// Question 6 Part 1

#include <iostream>
using namespace std;

bool primenumber(int);

int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    if (primenumber(num))
    cout<<num<<" is a prime number";
    else cout<<num<<" is not a prime number";
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