#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    cout << "Enter value for c: ";
    cin >> c;

    cout << "Enter value for d: ";
    cin >> d;

    if (a == b && b == c && c == d)
    {
        cout << "All numbers are equal." << endl;
    }
    else
    {

        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << "a is max." << endl;
                }
                else if (a == d)
                {
                    cout << "a and d are both max and equal." << endl;
                }
                else
                {
                    cout << "d is max." << endl;
                }
            }
            else if (a == c)
            {
                if (a > d)
                {
                    cout << "a and c are both max and equal." << endl;
                }
                else if (a == d)
                {
                    cout << "a, c, and d are equal and max." << endl;
                }
                else
                {
                    cout << "d is max." << endl;
                }
            }
            else
            {
                if (c > d)
                    cout << "c is max." << endl;
                else if (c == d)
                    cout << "c and d are both max and equal." << endl;
                else
                    cout << "d is max." << endl;
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                    cout << "b is max." << endl;
                else if (b == d)
                    cout << "b and d are both max and equal." << endl;
                else
                    cout << "d is max." << endl;
            }
            else if (b == c)
            {
                if (b > d)
                    cout << "b and c are both max and equal." << endl;
                else if (b == d)
                    cout << "b, c, and d are all equal and max." << endl;
                else
                    cout << "d is max." << endl;
            }
            else
            {
                if (c > d)
                    cout << "c is max." << endl;
                else if (c == d)
                    cout << "c and d are both max and equal." << endl;
                else
                    cout << "d is max." << endl;
            }
        }
    }

    return 0;
}
