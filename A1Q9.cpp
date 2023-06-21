#include <iostream>
using namespace std;

int
main ()
{
  char character;
  cout << "Enter Alphabet, Digit or Special Character: ";
  cin >> character;
  if ((character >= 'a' && character <= 'z')
      || (character >= 'A' && character <= 'Z'))
    cout << "It is an Alphabet";
  else if (character >= '0' && character <= '9')
    cout << "It is a Digit";
  else
    cout << "it is a special character";
}
