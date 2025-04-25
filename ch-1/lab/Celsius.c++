#include <iostream>
using namespace std;

int main() {
    float c, f;

    cout << "Enter the temperature in Celsius: ";
    cin >> c;
   // logic 
    f = (c * 9 / 5) + 32;

    cout << "The temperature  is: " << f << endl;

    return 0;
}
