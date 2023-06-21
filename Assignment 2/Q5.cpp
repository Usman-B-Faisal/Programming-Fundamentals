// Question 5

#include <iostream>

using namespace std;

int main()
{
    int num, even, odd;
    even=0;
    odd=0;
    cout<<"Enter a Number: ";
    while (num!=-1)
    {
        cin>>num;
        if((num%2)==0)
        {even=even+1;}
        else {odd=odd+1;}
    }
    cout<<"even: "<<even<<endl;
    cout<<"odd: "<<odd-1<<endl;
}