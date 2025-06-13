#include <iostream>
using namespace std;

class student
{

public:
    int grid;
    string ampin;

    student(int grid, string ampin)
    {
        this->grid = grid;
        this->ampin = ampin;

        cout << "Enter our grid id:-";
        cin >> grid;
        cout << "Enter our ampin id:-";
        cin >> ampin;

        if (this->grid == grid && this->ampin == ampin)
        {

            cout << "login is successfully" << endl;
        }
        else
        {

            cout << "try again...." << endl;
        }
    }
};

main()
{
    student st1(123, "p@123");
}