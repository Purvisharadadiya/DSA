#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;

  
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "Enter value of d: ";
    cin >> d;
    cout << "Enter value of e: ";
    cin >> e;

    
    int sum = a + b + c + d + e;
    cout << "Total sum of all variables is: " << sum << endl;

    if (a == b && b == c && c == d && d == e) {
        cout << "All variables are equal." << endl;
    } else if (a == b || a == c || a == d || a == e ||
               b == c || b == d || b == e ||
               c == d || c == e ||
               d == e) {
        cout << " both  are equal." << endl;
    } else {
        cout << "All variables are different." << endl;
    }

   
    if (a >= b && a >= c && a >= d && a >= e) {
        cout << "a is the maximum: " << a << endl;
    } else if (b >= a && b >= c && b >= d && b >= e) {
        cout << "b is the maximum: " << b << endl;
    } else if (c >= a && c >= b && c >= d && c >= e) {
        cout << "c is the maximum: " << c << endl;
    } else if (d >= a && d >= b && d >= c && d >= e) {
        cout << "d is the maximum: " << d << endl;
    } else {
        cout << "e is the maximum: " << e << endl;
    }

    return 0;
}
