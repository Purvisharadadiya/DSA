#include <iostream>
using namespace std;

void inc(int *x);

main()
{
    int a = 5;
    inc(&a);
    cout << " after a value:-" << a << endl;
}

void inc(int *x)
{
    *x = *x + 1;
    cout << "bfor a value:-" << *x << endl;
}