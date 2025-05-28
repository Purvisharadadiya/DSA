#include <iostream>
using namespace std;

void sum(int a, int b) {
    cout << "Sum: " << (a + b) << endl;
}

void Subtraction(int a, int b) {
    cout << "Subtraction: " << (a - b) << endl;
}

void Multiplication(int a, int b) {
    cout << "Multiplication: " << (a * b) << endl;
}

void division (int a,int b){

      cout << "division " << (a / b) << endl;
    
}

void Modulus(int a, int b) {
    if (b != 0)
        cout << "Modulus: " << (a % b) << endl;
    else
        cout << "Cannot perform modulus by zero!" << endl;
}

 main() {
    while (true) {
        cout << "\n\nPress 1 for (+) ";
        cout << "\nPress 2 for (-) ";
        cout << "\nPress 3 for (*) ";
        cout << "\nPress 4 for (/) ";
        cout << "\nPress 5 for (%)";
        cout << "\nPress 0 for exit.";

        int choice;
        cout << "\n\nEnter your choice :- ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        int first, second;

        switch (choice) {
            case 1:
                cout << "\n\nEnter first number :- ";
                cin >> first;
                cout << "Enter second number :- ";
                cin >> second;
                sum(first, second);
                break;
            case 2:
                cout << "\n\nEnter first number :- ";
                cin >> first;
                cout << "Enter second number :- ";
                cin >> second;
                Subtraction(first, second);
                break;
            case 3:
                cout << "\n\nEnter first number :- ";
                cin >> first;
                cout << "Enter second number :- ";
                cin >> second;
                Multiplication(first, second);
                break;
            case 4:
                cout << "\n\nEnter first number :- ";
                cin >> first;
                cout << "Enter second number :- ";
                cin >> second;
                division(first, second);
                break;
            case 5:
                cout << "\n\nEnter first number :- ";
                cin >> first;
                cout << "Enter second number :- ";
                cin >> second;
                Modulus(first, second);
                break;
            default:
                cout << "Undefined value...!" << endl;
                break;
        }
    }


}
