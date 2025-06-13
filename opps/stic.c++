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
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n]; 

   
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        s[i].getInput();
    }

    
    for (int i = 0; i < n; i++) {
        cout << "\nDisplaying student " << i + 1 << " information:";
        s[i].display();
    }

    return 0;
}
