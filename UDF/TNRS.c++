#include <iostream>
using namespace std;

void circleArea(int r);
main()
{
    circleArea(2);
    circleArea(3);
    circleArea(4);

}

void circleArea(int r)
{
    float ans;
    ans = 3.14 * r * r;
    cout<<"ans:"<<ans<<endl;
}
