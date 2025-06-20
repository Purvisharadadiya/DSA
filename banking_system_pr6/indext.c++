#include <iostream>
using namespace std;

class Bank
{
private:
    string customerName;
    int accountNumber;
    float balance;

public:
    void setBank(string customerName, int accountNumber, float balance)
    {
        this->customerName = customerName;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void showBalance()
    {
        cout << "\nCurrent Balance: $" <<this-> balance << endl;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << " successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(float amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdraw amount.\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrew $" << amount << " successfully.\n";
        }
    }

    void displayInfo()
    {
        cout << "\n--- Account Info ---\n";
        cout << "Name: " << this->customerName << endl;
        cout << "Account Number: " << this->accountNumber << endl;
        showBalance();
    }

    int getAccountNumber()
    {
        return accountNumber;
    }
};

int main()
{
    Bank users[50];
    int count = 0;
    int choice;
    float amount;
    string name;
    int accNo;
    int check = 0;
    float initBalance;

    do
    {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Show Balance\n";
        cout << "5. Account Info\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter account number: ";
            cin >> accNo;
            cout << "Enter initial balance: $";
            cin >> initBalance;

            users[count++].setBank(name, accNo, initBalance);

            cout << "Account created successfully.\n";
            break;

        case 2:
            cout << "Enter account number: ";
            cin >> accNo;
            cout << "Enter your deposit amount: ";
            cin >> amount;
            for (int i = 0; i < count; i++)
            {
                if (users[i].getAccountNumber() == accNo)
                {
                    check = 1;
                    users[i].deposit(amount);
                    break;
                }
                if (check == 0)
                    cout << "Account not found.\n";
            }
            break;

        case 3:
            cout << "Enter account number: ";
            cin >> accNo;
            cout << "Enter your withdraw amount: ";
            cin >> amount;
            for (int i = 0; i < count; i++)
            {
                if (users[i].getAccountNumber() == accNo)
                {
                    check = 1;
                    users[i].withdraw(amount);
                    break;
                }
                if (check == 0)
                    cout << "Account not found.\n";
            }
            break;

        case 4:
            cout << "Enter account number: ";
            cin >> accNo;
            for (int i = 0; i < count; i++)
            {
                if (users[i].getAccountNumber() == accNo)
                {
                    check = 1;
                    users[i].showBalance();
                    break;
                }
                if (check == 0)
                    cout << "Account not found.\n";
            }
            break;

        case 5:
            cout << "Enter account number: ";
            cin >> accNo;
            for (int i = 0; i < count; i++)
            {
                if (users[i].getAccountNumber() == accNo)
                {
                    check = 1;
                    users[i].displayInfo();
                    break;
                }
                if (check == 0)
                    cout << "Account not found.\n";
            }
            break;
            case 6:
            cout << "Thank you for using our banking system!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
