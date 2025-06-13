// #include <iostream>
// using namespace std;
// // array of pointer

// main()
// {
//         int a[] = {10, 20, 30, 40, 50};
//         int *ptr = a;

//         for (int i = 0; i < 5; i++)
//         {
//             cout << "addres:-" << ptr << " value:-" << *ptr << endl;
//             ptr++;
//         }
//     }
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;
    int *arr[3];

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for (int i = 0; i < 3; i++)
    {
        cout << *arr[i] << " " << endl;
    }

    return 0;
}
