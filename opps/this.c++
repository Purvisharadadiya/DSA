#include <iostream>
using namespace std;

class studen
{
private:
    string name;
    int age, rollname;

public:
    void setAge(string name, int age, int rollname)
    {
        this->name = name;
        this->age = age;
        this->rollname = rollname;
    }

    void getAge()
    {
        cout << "name:-" << this->name << endl;
        cout << "age:-" << this->age << endl;
        cout << "rollname:-" << this->rollname << endl;
        cout<<"----------------------------------------";
    }
};

main()
{
    studen st, st1, st2, st3;
    st.setAge("purvisha",19,12);
    st1.setAge("purvisha",19,12);
    st2.setAge("purvisha",19,12);
    st3.setAge("purvisha",19,12);

    st.getAge();
    st1.getAge();
    st2.getAge();
    st3.getAge();
    
}