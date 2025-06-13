// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     Student()
//     {
//         cout << "Default Constructor called" << endl;
//     }
// };
// int main()
// {
//     Student s1;
//     return 0;
// }

#include <iostream>
using namespace std;

class sum {
    int a;
    int b;

public:
    
    sum(int a, int b) {
        this->a = a;
        this->b = b;
    }

   
    void result() {
        int c = this->a + this->b;
        cout << "sum is:- " << c << endl;
    }
};

int main() {
    sum c(10, 20);  
    c.result();

    return 0;
}
