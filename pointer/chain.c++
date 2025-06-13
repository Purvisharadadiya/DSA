#include <iostream>
using namespace std;

 int main()
{
    int x = 41;

    int *ptr = &x;
    int **ptr = &ptr;

    cout << "value:-" << x << endl;
    cout << "value:-" << *ptr <<*ptr<< endl;
}