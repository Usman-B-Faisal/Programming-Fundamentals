#include<iostream>
using namespace std;

void lookupname(char a[5][100],int b[5][11])
{
    int i=0;
    char uname[5][100];
    cout<<"Enter Name Of Person "<<i+1<<": ";
    cin.ignore();
    cin.getline(uname[0],100);
    for (int i=0;i<5;i++)
    {for(int j=0;j<100;j++)
    {
        if(uname[0][i]==a[i][j]){
            cout<<a[i][j];
        }
    }
}
}
int main()
{
    char name[5][100];
    int num[5][11];
    for(int i=0;i<5;i++){
    cout<<"Enter Name Of Person "<<i+1<<": ";
    cin.getline(name[i],100);
    }
    for(int i=0;i<5;i++){
    cout<<"Enter Number Of Person "<<i+1<<": ";
    cin>>num[i][11];
    }
    lookupname(name,num);
}