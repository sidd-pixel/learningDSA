#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not elligble for job";
    }
    else if (age <= 57)
    {
        cout << "Elligble for job";
        if (age >= 55 && age <= 57)
        {
            cout << ", but retirement soon";
        }
    }
    else
    {
        cout << "Retirement time";
    }

    return 0;
}