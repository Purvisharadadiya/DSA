#include <iostream>
using namespace std;

class Account
{

    string name;
    int accNumber;
    double balance;

public:
    Account(string name, int accNo, double bal)
    {
        name = name;
        accNumber = accNo;
        balance = bal;
    }

    void displayInfo()
    {
        cout << "\nAccount Holder:- " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance:-" << balance << endl;
    }

    void deposit(int amount)

    {

        balance += amount;
        cout << "Amount" << amount << " deposited successfully." << endl;
    }

    virtual void withdraw(int amount)

    {

        if (amount > balance)
        {
            cout << "Insufficient balance!\n";
        }
        else
        {
            balance -= amount;
            cout << "Amount" << amount << " withdrawn successfully." << endl;
        }
    }
};

int main()
{
    string name;
    int accNo;
    double initialBalance;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter initial deposit: ";
    cin >> initialBalance;

    Account *user = new Account(name, accNo, initialBalance);

    int choice;
    double amount;

    do
    {
        cout << "* * * Banking Menu * * *";
        cout << "1. Display Info" << endl;
        cout << "2.Deposit" << endl;
        cout << "3.withdraw" << endl;
        cout << "4.Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            user->displayInfo();
            break;
        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            user->deposit(amount);
            break;
        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            user->withdraw(amount);
            break;
        case 4:
            cout << "Thank you for using the banking system!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
