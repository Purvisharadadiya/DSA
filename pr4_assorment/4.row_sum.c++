
#include <iostream>
using namespace std;
main()
{

    int row, col;
    cout << "Enter the row:-";
    cin >> row;
    cout << "Enter the col:-";
    cin >> col;

    int a[row][col];
    cout << "😊 Input array Element: 😊" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << " 😊 Output Array 😊 :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << " 😊 Sum of row: 😊" << endl;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
        cout << "Sum of row " << i << " = " << sum << endl;
    }

    cout << endl;
}
