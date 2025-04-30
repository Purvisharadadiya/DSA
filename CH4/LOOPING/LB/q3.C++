#include <iostream>
using namespace std;

int main()
{
    int n, FACT = 1;

    cout << "Enter a  number: ";
    cin >> n;

        for (int i = 1; i <= n; i++)
        {
            FACT = FACT * i;
        }
        cout << "Factorial of " << n << " is: " << FACT << endl;
    

    return 0;
}
