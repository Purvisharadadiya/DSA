#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    if (a > b)
    {
        cout << "a is max." << endl;
    }
    else
    {
        cout << "b is max." << endl;

        return 0;
    }
}
