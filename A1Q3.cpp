#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, r1, r2, r3, r4, r5;
    cout << "Enter Marks of C1\n";

    cout << "Marks of subject 1= ";
    cin >> a;

    cout << "Marks of subject 2= ";
    cin >> b;

    cout << "Marks of subject 3= ";
    cin >> c;

    cout << "Marks of subject 4= ";
    cin >> d;

    cout << "Marks of subject 5= ";
    cin >> e;

    r1 = a + b + c + d + e;

    cout << "Enter Marks of C2\n";

    cout << "Marks of subject 1= ";
    cin >> a;

    cout << "Marks of subject 2= ";
    cin >> b;

    cout << "Marks of subject 3= ";
    cin >> c;

    cout << "Marks of subject 4= ";
    cin >> d;

    cout << "Marks of subject 5= ";
    cin >> e;

    r2 = a + b + c + d + e;

    cout << "Enter Marks of C3\n";

    cout << "Marks of subject 1= ";
    cin >> a;

    cout << "Marks of subject 2= ";
    cin >> b;

    cout << "Marks of subject 3= ";
    cin >> c;

    cout << "Marks of subject 4= ";
    cin >> d;

    cout << "Marks of subject 5= ";
    cin >> e;

    r3 = a + b + c + d + e;

    cout << "Enter Marks of C4\n";

    cout << "Marks of subject 1= ";
    cin >> a;

    cout << "Marks of subject 2= ";
    cin >> b;

    cout << "Marks of subject 3= ";
    cin >> c;

    cout << "Marks of subject 4= ";
    cin >> d;

    cout << "Marks of subject 5= ";
    cin >> e;

    r4 = a + b + c + d + e;

    cout << "Enter Marks of C5\n";

    cout << "Marks of subject 1= ";
    cin >> a;

    cout << "Marks of subject 2= ";
    cin >> b;

    cout << "Marks of subject 3= ";
    cin >> c;

    cout << "Marks of subject 4= ";
    cin >> d;

    cout << "Marks of subject 5= ";
    cin >> e;

    r5 = a + b + c + d + e;

    if (r1 > r2 && r1 > r3 && r1 > r4 && r1 > r5)
        cout << "C1 has greatest aggregate of " << r1 << "\n";
    else if (r2 > r1 && r2 > r3 && r2 > r4 && r2 > r5)
        cout << "C2 has greatest aggregate of " << r2 << "\n";
    else if (r3 > r1 && r3 > r2 && r3 > r4 && r3 > r5)
        cout << "C3 has greatest aggregate of " << r3 << "\n";
    else if (r4 > r2 && r4 > r3 && r4 > r1 && r4 > r5)
        cout << "C4 has greatest aggregate of " << r4 << "\n";
    else
        cout << "C5 has greatest aggregate of " << r5 << "\n";

}