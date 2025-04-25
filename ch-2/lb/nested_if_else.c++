#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the first number a: ";
    cin >> a;

    cout << "Enter the second number b: ";
    cin >> b;

    cout << "Enter the third number c: ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "a is max." << endl;
        }
        else
        {
            cout << "c is max." << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is max." << endl;
        }
        else
        {
            cout << "c is max." << endl;
        }
    }

    return 0;
}
