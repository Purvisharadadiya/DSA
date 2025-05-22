
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :-";
    cin >> size;

    int a[size];
    cout << "Input Array :-";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output Array :-";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int max = a[0];
    int smax;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }
    }
    cout << endl;
    cout << "Second largest element :- " << smax;
}
