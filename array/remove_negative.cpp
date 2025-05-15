
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :-" << endl;
    cin >> size;

    int a[size];
    cout << "Input Array Element :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Remove Negative Number:-" << endl;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << " ";
        }
    }
}
