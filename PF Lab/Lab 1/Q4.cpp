#include <iostream>
using namespace std;
int main()
{
double floor, rooms, occupied,sumr=0,sumo=0;
double percentage;
cout<<"Enter floors: ";
cin>>floor;
while(floor>=0)
{
cout<<"How many rooms does floor no "<<floor<<" has: ";
cin>>rooms;
cout<<"How many rooms in floor no "<<floor<<" are occupied: ";
cin>>occupied;
sumr=sumr+rooms;
sumo=sumo+occupied;
floor--;
}
cout<<"Number of rooms are: "<<sumr<<endl;
cout<<"Number of rooms occupied are: "<<sumo<<endl;
percentage=(sumo/sumr)*100;
cout<<percentage<<" percent rooms are occupied";
system ("pause");
}