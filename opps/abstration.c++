#include <iostream>
using namespace std;
class Shape
{

 public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw()

    {
        int r;
        float ans;
        cout << "ENTER THE REDIUS:-";
        cin >> r;
        ans = 3.14 * r * r;
        cout << "Drawing Circle" << ans << endl;
    }
};
//   class trign : public Shape{

//   }

int main()
{
    Shape *shape;
    Circle c;
    shape = &c;
    shape->draw();
    return 0;
}