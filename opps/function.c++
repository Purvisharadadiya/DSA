#include <iostream>
using namespace std;

class coutret
{
public:
    static int cunt;

    static void incriment()
    {
        cunt++;
        cout << "count:-" << cunt << endl;
    }
};

int coutret::cunt = 0;
main()
{
    for (int i = 0; i < 3; i++)
    {
        coutret ::incriment();
    }
}