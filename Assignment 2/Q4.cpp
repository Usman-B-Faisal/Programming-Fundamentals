// Question 4

#include <iostream>

using namespace std;

int main()
{
    int rN, cN;
    cout<<"Enter a Number: ";
    cin>>rN;
    for(cN=1; cN<rN; cN++)
    {
        if(rN==(cN*(cN+1)*(cN+2)))
        {cout<<"The consecutive numbers whose product is "<<rN<<" are "<<cN<<","<<cN+1<<","<<cN+2<<endl;
        break;}
    }
        if(rN!=(cN*(cN+1)*(cN+2)))
        cout<<"No";
}