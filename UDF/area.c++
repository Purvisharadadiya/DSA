#include <iostream>
using namespace std;

void circleArea();
main()
{
    circleArea();
    circleArea();
    circleArea();
}

void circleArea()

{
    int r;
    float ans;
    cout << "Enter redius:-";
    cin >> r;
    ans = 3.14 * r * r;
    cout << "ans:" << ans << endl;
}
