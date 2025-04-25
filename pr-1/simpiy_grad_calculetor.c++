#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter your score: ";
    cin >> marks;

    if (marks > 90 && marks <= 100)
        grade = 'A';
    else if (marks > 80 && marks <= 90)
        grade = 'B';
    else if (marks > 70 && marks <= 80)
        grade = 'C';
    else if (marks > 50 && marks <= 70)
        grade = 'D';
    else if (marks > 33 && marks <= 50)
        grade = 'E';
    else if (marks < 33)
        grade = 'F';
    else
    {
        cout << "Invalid score!" << endl;
        return 0;
    }

    switch (grade)
    {
        case 'A':
            cout << "Your grade is A. Excellent!!!" << endl;
            break;
        case 'B':
            cout << "Your grade is B. Well done!" << endl;
            break;
        case 'C':
            cout << "Your grade is C. Good job" << endl;
            break;
        case 'D':
            cout << "Your grade is D. Good, but you could do better" << endl;
            break;
        case 'E':
            cout << "Your grade is E. You passed, but you could do better" << endl;
            break;
        case 'F':
            cout << "Sorry, you failed" << endl;
            break;
    }

    if (grade >= 'A' && grade <= 'E')
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    }
    else
    {
        cout << "Please try again next time." << endl;
    }

    return 0;
}
