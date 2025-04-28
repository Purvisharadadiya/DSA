#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter your score: ";
    cin >> marks;

    grade = (marks > 90 && marks <= 100) ? 'A' :
            (marks > 80 && marks <= 90) ? 'B' :
            (marks > 70 && marks <= 80) ? 'C' :
            (marks > 50 && marks <= 70) ? 'D' :
            (marks > 33 && marks <= 50) ? 'E' :
            (marks >= 0 && marks <= 33) ? 'F' : 'X';

    if (grade == 'X')
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
