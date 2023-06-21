#include<iostream>
using namespace std;

int
main ()
{
  int a, b, c;

  cout << "Enter Num 1: ";
  cin >> a;
  cout << "Enter Num 2: ";
  cin >> b;
  c = b;
  b = a;
  a = c;
  cout << "Swaping Num 1 and Num 2\n";
  cout << "Num 1: " << a << "\n";
  cout << "Num 2: " << b << "\n";

  /* BONUS: Solve the same problem, swap the values of two integers A and B but you are not allowed to 
     use any extra variable other than A and B */

  cout << "Enter Num 1: ";
  cin >> a;
  cout << "Enter Num 2: ";
  cin >> b;
  a = a * b;
  b = a / b;
  a = a / b;
  cout << "Swaping Num 1 and Num 2\n";
  cout << "Num 1: " << a << "\n";
  cout << "Num 2: " << b;

}
