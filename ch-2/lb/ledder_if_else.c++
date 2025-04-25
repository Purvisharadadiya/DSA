#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "Enter value of d: ";
    cin >> d;

    if (a == b && b == c && c == d)
    {
        cout << "All variables are equal." << endl;
    }
    else if (a == b || a == c || a == d || b == c || b == d || c == d)
    {
        cout << "Some variables are equal." << endl;
    }
    else
    {
        cout << "All variables are different." << endl;
    }

    if (a >= b && a >= c && a >= d)
    {
        cout << "a is the maximum: " << a << endl;
    }
    else if (b >= a && b >= c && b >= d)
    {
        cout << "b is the maximum: " << b << endl;
    }
    else if (c >= a && c >= b && c >= d)
    {
        cout << "c is the maximum: " << c << endl;
    }
    else
    {
        cout << "d is the maximum: " << d << endl;
    }

    return 0;
}
