#include <iostream>
using namespace std;

int main() {
    int a, b;
    // 1. Using a third variable
    a = 5;
    b = 10;
    cout << "Before Swap (using temp): a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;

    // 2. Using arithmetic (+ and -)
    a = 5;
    b = 10;
    cout << "Before Swap (using + -): a = " << a << ", b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;

    // 3. Using multiplication and division (* and /)
    a = 5;
    b = 10;
    cout << "Before Swap (using * /): a = " << a << ", b = " << b << endl;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;
  // 4. Using XOR
    a = 5;
    b = 10;
    cout << "Before Swap (using XOR): a = " << a << ", b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;

    return 0;
}
