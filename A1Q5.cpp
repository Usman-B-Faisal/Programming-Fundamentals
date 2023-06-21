#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 3 Integers: \n";
    cout << "A= "; cin >> a;
    cout << "B= "; cin >> b;
    cout << "C= "; cin >> c;

    if (a > b && b > c)
        cout << "In ascending order: " << c << "," << b << "," << a;
    else if (a > c && c > b)
        cout << "In ascending order: " << b << "," << c << "," << a;
    else if (b > a && a > c)
        cout << "In ascending order: " << c << "," << a << "," << b;
    else if (b > c && c > a)
        cout << "In ascending order: " << a << "," << c << "," << b;
    else if (c > b && b > a)
        cout << "In ascending order: " << a << "," << b << "," << c;
    else cout << "In descending order: " << b << "," << a << "," << c;

    cout << "\n";

    if (a > b && b > c)
        cout << "In descending order: " << a << "," << b << "," << c;
    else if (a > c && c > b)
        cout << "In descending order: " << a << "," << c << "," << b;
    else if (b > a && a > c)
        cout << "In descending order: " << b << "," << a << "," << c;
    else if (b > c && c > a)
        cout << "In descending order: " << b << "," << c << "," << a;
    else if (c > b && b > a)
        cout << "In descending order: " << c << "," << b << "," << a;
    else cout << "In descending order: " << c << "," << a << "," << b;

}