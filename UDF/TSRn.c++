#include <iostream>
using namespace std;

void sum(int a, int b);
void sum(int a, int b)
{
    cout << "ans:-" << a + b << endl;
}
main()
{
    sum(10, 2);
    sum(11, 20);
    sum(20, 10);
}
