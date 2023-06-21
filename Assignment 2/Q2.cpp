// Question 2

#include <iostream>

using namespace std;

int
main ()
{
  int x = 100, y;
  while (x > 0)
    {
      cout<<"Y= ";
      cin >> y;
      if (y == 25)
      {
          x--;
          cout<<"X ="<<x<<endl;
      }
      else {
          cin >> x;
          cout << "x = " << x << endl;
      }
    }
}
