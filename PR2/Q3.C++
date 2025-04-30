#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, last, first;

    cout << "Enter any number: ";
    cin >> n;

    last = n % 10;     
    first = n;

    while (first >= 10) {
        first = first / 10;  
    }

    sum = first + last;

    cout << "The sum of first and last digits: " << sum << endl;

    return 0;
}
