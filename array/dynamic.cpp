
#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;

    int a[size];
    cout << "Input Array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    cout << "Output Array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}


    

