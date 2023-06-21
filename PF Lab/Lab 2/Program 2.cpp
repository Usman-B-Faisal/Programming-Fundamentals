#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;


int
main()
{

    srand(time(0));

    int lottery[5], user[5], i = 0;
    cout << "Random numbers generated between 0 and 9" << endl;;
    for (i = 0; i < 10; i++)
    {
        lottery[i] = rand() % ((9 + 1) - 1) + 1;
    }
    cout << "Enter 5 Numbers between 1 and 9: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> user[i];
    }
    cout << "Lottery Array: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << lottery[i] << "\t";
    }
    cout << "\nUser Array: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << user[i] << "\t";
    }
    int count = 0;
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (lottery[i] == user[j])
                cout << "\nlottery[" << i << "] = user[" << j << "]";
            count++;
        }
    }
    cout << endl;
    if (count == 5)
        cout << "Congratulations you are the grand prize winner";
    return 0;
}
