#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "sum of: " << add<int>(5, 3) << endl;
    return 0;
}
