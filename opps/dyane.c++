#include <iostream>
using namespace std;

class Student {
public:
    int age;
    int roll;
    int salary;
    string name;

    void getInput() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    s.getInput();
    s.display();
    return 0;
}
