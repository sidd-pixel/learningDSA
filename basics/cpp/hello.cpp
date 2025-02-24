#include <iostream>
using namespace std;
int main()
{
    // to print output
    //  cout << "My name is siddhant" << "\n";
    //  cout << "My name is siddhant";

    // taking input from user
    // int x, y;
    // cin >> x >> y;
    // cout << "The value of x:" << x << "and y:" << y;
    // return 0;

    // data types
    // int for integers, float for decimal values,

    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << "my name is " << s1 << " " << s2;

    // usign getline
    // string str;
    // getline(cin, str);
    // cout << "My name is " << str;
    // return 0;

    // int x;
    // cin >> x;
    // cout << x;
    // return 0;
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not elligble for job";
    }
    else if (age >= 18)
    {
        cout << "Elligble for job";
        if (age >= 55 && age <= 57)
        {
            cout << "Elligble for job but retirement soon";
        }
        else if (age > 57)
        {
            cout << "Retirement time";
        }
    }

    return 0;
}