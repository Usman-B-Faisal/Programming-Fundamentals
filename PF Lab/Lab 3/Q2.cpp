#include<iostream>
using namespace std;

int main()
{
    char wthr[3][30];
    cout<<"Enter 'S' for sunny,'R' for rainy,'C' for cloudy (NOTE: ENTER LETTERS IN UPPERCASE): "<<endl;
    for(int i=0;i<3;i++){
        for (int j=0;j<30;j++){
            cout<<"Day "<<j+1<<": ";
            cin>>wthr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<30;j++){
            cout<<wthr[i][j]<<"\t";
        }
        cout<<endl;
    }
    //----------------------------------------------------------
    int count=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<1;i++){
        for (int j=0;j<30;j++){
            if(wthr[i][j]=='S'){count++;}
            else if(wthr[i][j]=='R'){count1++;}
            else if(wthr[i][j]=='C'){count2++;}
            else cout<<"Invalid Input"<<endl;
        }}
    cout<<"Number of sunny days in June were: "<<count<<endl;
    cout<<"Number of rainy days in June were: "<<count1<<endl;
    cout<<"Number of cloudy days in June were: "<<count2<<endl;
    //----------------------------------------------------------
    count=0;
    count1=0;
    count2=0;
    for(int i=1;i<2;i++){
        for (int j=0;j<30;j++){
            if(wthr[i][j]=='S'){count++;}
            else if(wthr[i][j]=='R'){count1++;}
            else if(wthr[i][j]=='C'){count2++;}
            else cout<<"Invalid Input"<<endl;
        }
    }
    cout<<"Number of sunny days in July were: "<<count<<endl;
    cout<<"Number of rainy days in July were: "<<count1<<endl;
    cout<<"Number of cloudy days in July were: "<<count2<<endl;
    //----------------------------------------------------------
    count=0;
    count1=0;
    count2=0;
    for(int i=2;i<3;i++){
        for (int j=0;j<30;j++){
            if(wthr[i][j]=='S'){count++;}
            else if(wthr[i][j]=='R'){count1++;}
            else if(wthr[i][j]=='C'){count2++;}
            else cout<<"Invalid Input"<<endl;
        }
    }
    cout<<"Number of sunny days in August were: "<<count<<endl;
    cout<<"Number of rainy days in August were: "<<count1<<endl;
    cout<<"Number of cloudy days in August were: "<<count2<<endl;
    

}