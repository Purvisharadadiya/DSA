
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;

    int a[size];
    cout << "Input array Element:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Negative Element :" << endl;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }
}
