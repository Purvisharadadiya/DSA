#include <iostream>
using namespace std;

class student
{
private:
    int age;

public:
    void setAge(int a)
    {
        age = a;
    }

    int getAge(){
        return age;
    }
};

main(){
    student st;
    st.setAge(19);
    cout<<"Age:-"<<st.getAge();
}
