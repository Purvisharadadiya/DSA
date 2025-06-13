#include <iostream>
using namespace std;

class accunt
{
public:
    int accuntno;
    string name;
    static string bank;
    void setdel(int accuntno, string name)
    {

        this->accuntno = accuntno;
        this->name = name;
    }
    void disply()
    {
        cout << "accuntno:-" << accuntno << endl;
        cout << "name:-" << name << endl;
        cout << "bank:-" << bank << endl;
    }
};

string accunt::bank = "borda";
main()
{
    accunt ac;
    ac.setdel(112, "purvisha");
    ac.disply();
}