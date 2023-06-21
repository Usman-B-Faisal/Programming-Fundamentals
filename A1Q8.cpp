#include <iostream>
using namespace std;

int
main ()
{
  int a, b, c;
  cout << "Enter 3 Numbers: ";
  cin >> a >> b >> c;
  a = a * a;
  b = b * b;
  c = c * c;
  if (((a) == (b + c)) || ((b) == (a + c)) || ((c) == (b + a)))
    cout << "It is a pythagorean triple";
  else
    cout << "It is not a pythagorean triple";
}
