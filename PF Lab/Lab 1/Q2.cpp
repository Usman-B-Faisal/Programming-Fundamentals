#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter Number: ";
for (int digit=0;;num/10)
{
digit=num%10;
cout<<"Digits Are "<<digit;
}
system ("pause");
}