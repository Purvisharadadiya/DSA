#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Student
{
private:
    T id;
    string name;

public:
    void setStudent(T id, string name)
    {
        this->id = id;
        this->name = name;
    }

    void displayInfo() const
    {
        cout << "\n--- Student Info ---\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }

    T getID() const
    {
        return id;
    }
};

int main()
{
    vector<Student<int>> students;
    int choice, id;
    string name;
    int found = 0;

    do
    {
        cout << "\n--- Student Menu ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Remove Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter Student ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name; // You can improve this with getline() later
            Student<int> s;
            s.setStudent(id, name);
            students.push_back(s);
            cout << "---------------Student added successfully------------------.\n";
            break;
        }

        case 2:
            for (int i = 0; i < students.size(); i++)
            {
                students[i].displayInfo();
            }
            break;

        case 3:
        {
            cout << "Enter ID to search: ";
            cin >> id;
            found = 0;
            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].getID() == id)
                {
                    students[i].displayInfo();
                    found = 1;
                    break;
                }
            }
            if (found == 0)
                cout << "---------------Student not found--------------------.\n";
            break;
        }

        case 4:
        {
            cout << "Enter the ID to remove: ";
            cin >> id;
            found = 0;

            for (int i = 0; i < students.size(); ++i)
            {
                if (students[i].getID() == id)
                {
                    students[i] = students.back(); // Swap with last
                    students.pop_back();           // Remove last
                    found = 1;
                    cout << "------------ Removed Successfully ------------" << endl;
                    break;
                }
            }

            if (found == 0)
            {
                cout << "ID Not Found!!" << endl;
            }

            break;
        }

        case 5:
            cout << "Exiting Student Management System.\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
