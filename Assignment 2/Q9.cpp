// Question 9

#include <iostream>
using namespace std;
int main()
{
    int bd,bm,by,cd,cy,cm,ad,am,ay;
    cout<<"Enter your birthday on the year you were born (dd/mm/yyyy) in digits: "<<endl;
    cin>>bd>>bm>>by;
    cout<<"Enter current day (dd/mm/yyyy) in digits: "<<endl;
    cin>>cd>>cm>>cy;
    ay=cy-by;
    am=12-bm-1;
    if((bm==01)||(bm==03)||(bm==05)||(bm==07)||(bm==8)||(bm==10)||(bm==12))
    {ad=bd-cd;
    if(ad<0)
    ad=ad*(-1);}
    else if (bm==02)
    {ad=bd-cd;
    if(ad<0)
    ad=ad*(-1);}
    else ad=bd-cd;
    {if(ad<0)
    ad=ad*(-1);}
    
    cout<<"Your age is "<<ay<<" years "<<am<<" months "<<ad<<" days";
}