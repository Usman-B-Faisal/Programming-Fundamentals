#include<iostream>
using namespace std;

bool Exists(int data[][6], int pattern[][3])
{
    bool ex=false;
    for (int i=0;i<6;i++)
    for(int j=0;j<6;j++)
    {
        if ((pattern[0][0]==data[i][j])&&(pattern[0][1]==data[i][j+1])&&(pattern[0][2]==data[i][j+2])&&(pattern[1][0]==data[i+1][j])&&(pattern[1][1]==data[i+1][j+1])&&(pattern[1][2]==data[i+1][j+2])&&(pattern[2][0]==data[i+2][j])&&(pattern[2][1]==data[i+2][j+1])&&(pattern[2][2]==data[i+2][j+2])){
            cout<<"3x3 matrix is true at data["<<i<<"]["<<j<<"]"<<endl;
            ex=true;
            break;
        }
    }
    return ex;
}
int main()
{
    int six[6][6],three[3][3];
    for (int i=0;i<6;i++)
    {for (int j=0;j<6;j++)
    {
        cout<<"6x6 Matrix row "<<i+1<<" col "<<j+1<<": ";
        cin>>six[i][j];
    }
    }
    for (int i=0;i<6;i++)
    {for (int j=0;j<6;j++)
    {
        cout<<six[i][j]<<"\t";
    }
    cout<<endl;
    }
    for (int i=0;i<3;i++)
    {for (int j=0;j<3;j++)
    {
        cout<<"3x3 Matrix row "<<i+1<<" col "<<j+1<<": ";
        cin>>three[i][j];
    }
    }
    for (int i=0;i<3;i++)
    {for (int j=0;j<3;j++)
    {
        cout<<three[i][j]<<"\t";
    }
    cout<<endl;
    }
    Exists(six,three);
    system("pause");
    return 0;
}