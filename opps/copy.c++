#include <iostream>
using namespace std;

class Student
{
public:
    int age;

    Student(int age)
    {
        this->age = age;
    }

    Student(Student &s)
    {
        age = s.age;
    }

    void display()
    {
        cout << "Age: " << age << endl;
    }

    ~Student()
    {
        cout << "remove momori..." << endl;
    }
};

int main()
{
    Student s1(20);

    s1.display();

    return 0;
}
