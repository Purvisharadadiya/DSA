#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter the size of array:-" << endl;
    cin >> size;

    int a[size];

    cout << "Input Array Elements:- " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Output array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
        cout << "sum Of array :- " << sum;
        cout << endl;
    }
    
    int avg = sum / size;
    cout << "AVg Of array :- " << avg;
}