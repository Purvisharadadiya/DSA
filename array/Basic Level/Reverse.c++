#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int n = size - 1;
    for (int i = 0; i < size / 2; i++, n--)
    {
        int temp = a[i];
        a[i] = a[n];
        a[n] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
