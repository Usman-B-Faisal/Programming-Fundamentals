#include<iostream>
using namespace std;

int main()
{
	int food[3][5],avg1,avg2,avg3,avg,i=0;
	for (i=0;i<3;i++)
		{for(int j=0;j<5;j++)
			{
				cout<<"Food consumed by monkey no."<<i+1<<" on day "<<j+1<<": ";
				cin>>food[i][j];
				if (food[i][j]<0)
				{
				    cout<<"Enter Positive value (try again)"<<endl;
				    system("pause");
				    return 0;
				}
			}
		}
		
		cout<<"Average food eaten per day by whole family of monkeys(in pounds): "<<endl;
		for(int j=0;j<5;j++)
		{
		    avg=(food[0][j]+food[1][j]+food[2][j])/3;
		    cout<<"Average food eaten on day "<<j+1<<" is: "<<avg<<endl;
		}
		i=0;
		for (int j=0;j<4;j++)
		    {
		        if(food[i][j]<food[i][j+1])
		        {avg1=food[i][j];}
		        else avg1=food[i][j+1];
		    }
		i=1;
		for(int j=0;j<4;j++)
		    {
		        if(food[i][j]<food[i][j+1])
		        {avg2=food[i][j];}
		        else avg2=food[i][j+1];
		    }
	    i=2;
	    for(int j=0;j<4;j++)
		    {
		        if(food[i][j]<food[i][j+1])
		        {avg3=food[i][j];}
		        else avg3=food[i][j+1];
		    }
		    cout<<avg1<<endl<<avg2<<endl<<avg3<<endl;
		    cout<<"Least amount of food eaten was: ";
		    if((avg1<avg2)&&(avg1<avg3))
		    {
		        cout<<avg1<<endl;
		    }
		    else if((avg2<avg1)&&(avg2<avg3))
		    {
		        cout<<avg2<<endl;
		    }
		    else cout<<avg3<<endl;
		    
		    i=0;
		for (int j=0;j<4;j++)
		    {
		        if(food[i][j]>food[i][j+1])
		        {avg1=food[i][j];}
		        else avg1=food[i][j+1];
		    }
		i=1;
		for(int j=0;j<4;j++)
		    {
		        if(food[i][j]>food[i][j+1])
		        {avg2=food[i][j];}
		        else avg2=food[i][j+1];
		    }
	    i=2;
	    for(int j=0;j<4;j++)
		    {
		        if(food[i][j]>food[i][j+1])
		        {avg3=food[i][j];}
		        else avg3=food[i][j+1];
		    }
		    cout<<"Max amount of food eaten was: ";
		    if((avg1>avg2)&&(avg1>avg3))
		    {
		        cout<<avg1<<endl;
		    }
		    else if((avg2>avg1)&&(avg2>avg3))
		    {
		        cout<<avg2<<endl;
		    }
		    else cout<<avg3<<endl;
		    return 0;
}