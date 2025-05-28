#include <iostream>
using namespace std;

int age(); // TNRS

main()
{
    if (age() == 1)
    {
        cout << "you can vot...";
    }
    else
    {
        cout << "you can  not vot...";
    }
}

int age()
{
    int n;
    cout << "Enter your age:-";
    cin >> n;

    if (n >= 18)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

void checkAge() // TNRN
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "You can vote..." << endl;
    else
        cout << "You cannot vote..." << endl;
}

int main()
{
    checkAge();
    return 0;
}

void checkAge(int age) // TSRN
{
    if (age >= 18)
        cout << "You can vote..." << endl;
    else
        cout << "You cannot vote..." << endl;
}

int main()
{
    int a;
    cout << "Enter your age: ";
    cin >> a;

    checkAge(a);
    return 0;
}

bool isEligible(int age) // TSRS
{
    return (age >= 18);
}

int main()
{
    int a;
    cout << "Enter your age: ";
    cin >> a;

    if (isEligible(a))
        cout << "You can vote..." << endl;
    else
        cout << "You cannot vote..." << endl;
    return 0;
}
