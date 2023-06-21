#include <iostream>
using namespace std;

int
main ()
{
  int x1, x2, x3, y1, y2, y3, a, b, c;
  cout << "Enter Points (x1,y1): ";
  cin >> x1 >> y1;
  cout << "Enter Points (x2,y2): ";
  cin >> x2 >> y2;
  cout << "Enter Points (x3,y3): ";
  cin >> x3 >> y3;
  a = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  b = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
  c = ((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
  if (((a) == (b + c)) || ((b) == (a + c)) || ((c) == (b + a)))
    cout << "It is a right angle triangle";
  else
    cout << "It is a scalene triangle";
}
