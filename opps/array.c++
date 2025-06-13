#include <iostream>
using namespace std;

class student
{
public:
    int age, roll;

    void disply()
    {

        cout << "age:-" << age << "roll:-" << roll << endl;
    }
};
main()
{
    student st[2];
    st[0].age = 20,
    st[0].roll = 12,
    st[1].roll = 13,
    st[1].age = 23;

    for (int i = 0; i < 2; i++)
    {
        st[i].disply();
    }
}
