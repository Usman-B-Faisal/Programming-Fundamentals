// Question 3

#include<iostream>
using namespace std;

int main()
{
    int height;
    char symbol;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter symbol: ";
    cin >> symbol;
    for(int ln = 1; ln <= height; ln++)
    {
        for(int c = 1; c <= ln; c++)
        {
            cout << symbol;
        }
        cout << endl;
    }
    for(int ln = height-1; ln > 0; ln--)
    {
        for(int c = ln; c >0; c--)
        {
            cout << symbol;
        }
        cout << endl;
    }

system("pause");
return 0;

}