#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;

    int a[size];
    cout << "Input Array :" << endl;
    for (int &num :a)
    {
        cin >> num;
    }
    cout << endl;
    cout << "Output Array : " << endl;

    for (int num: a)
    {
        cout << num << "  ";
    }
}
