#include <iostream>
using namespace std;

int main() {
    int first, second, third;

  
    cout << "Enter the first angle: ";
    cin >> first;

    cout << "Enter the second angle: ";
    cin >> second;

     //logic
    third = 180 - (first + second);

 
    cout << "The third angle is: " << third << endl;

    return 0;
}
