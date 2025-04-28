#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    a = 5;
    b = 10;
    cout << "Before Swap (using temp): a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;

    
    a = 5;
    b = 10;
    cout << "Before Swap (using + -): a = " << a << ", b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;

    
    a = 5;
    b = 10;
    
    cout << "Before Swap (using * /): a = " << a << ", b = " << b << endl;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;
 
    a = 5;
    b = 10;
    cout << "Before Swap (using XOR): a = " << a << ", b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After Swap: a = " << a << ", b = " << b << endl << endl;

    return 0;
}
