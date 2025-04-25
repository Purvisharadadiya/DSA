#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, simpleInterest;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in %): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculating Simple Interest logic
    simpleInterest = (principal * rate * time) / 100;

   
    cout << "The Simple Interest is: " << simpleInterest << endl;

    return 0;
}
