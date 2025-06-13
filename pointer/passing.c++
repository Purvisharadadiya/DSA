#include <iostream>
using namespace std;

void ArryFun(int a[], int size);

main()
{
    int a[] = {10, 20, 30, 40, 50};
    ArryFun(a, 5);
}

void ArryFun(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 1)
        {
            cout << a[i] << " " << endl;
        }
    }
}