#include<iostream>
using namespace std;

int
main ()
{
  double a, b, c;
  cout << "Enter Weight (KG): ";
  cin >> a;
  cout << "Enter Height (Meters): ";
  cin >> b;
  c = a / (b * b);
  cout << "BMI: " << c;
}
