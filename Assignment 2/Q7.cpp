// Question 7

#include <iostream>
using namespace std;

int main()
{
    int num=501,sum;
    for(sum=0;num<3000;num++)
    {
        if(((num%3==0)||(num%5==0))&&((num%3!=0)||(num%5!=0)))
        {
        sum=sum+num;
        }
    }
    cout<<sum;
    return 0;
}
