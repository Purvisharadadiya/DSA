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

    
    int min, smin;

    if (a[0] < a[1])
    {
        min = a[0];
        smin = a[1];
    }
    else
    {
        min = a[1];
        smin = a[0];
    }

    for (int i = 2; i < size; i++)
    {
        if (a[i] < min)
        {
            smin = min;
            min = a[i];
        }
        else if (a[i] < smin && a[i] != min)
        {
            smin = a[i];
        }
    }

   
    cout << endl;
    cout << "Second smallest element :- " << smin;
}