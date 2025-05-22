#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter the size of the array :- ";
    cin >> size;

    int a[size];
    cout << "\nInput Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "\n Output Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int index, value;
    cout << "Enter the index :- ";
    cin >> index;

    cout << endl;
    cout << "Enter the value to be inserted at the index :- " << endl;
    cin >> value;

    for (int i = size - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = value;
    size++;

    cout << "\n New  Array :- \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}