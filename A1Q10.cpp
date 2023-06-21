#include<iostream>
using namespace std;

int
main ()
{
  int num1, num2;
  char op;
  cout << "Enter Num 1: ";
  cin >> num1;
  cout << "Enter Operator: ";
  cin >> op;
  cout << "Enter Num 2: ";
  cin >> num2;
  switch (op)
    {
    case '+':
      cout << num1 + num2;
      break;
    case '-':
      cout << num1 - num2;
      break;
    case '*':
      cout << num1 * num2;
      break;
    case '/':
      cout << num1 / num2;
      break;
    default:
      cout << "Invalid Operator";
    }

}
