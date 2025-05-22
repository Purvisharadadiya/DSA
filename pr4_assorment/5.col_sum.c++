#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
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

    cout << " 😊 Output Array 😊 :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << " 😊 Sum of column: 😊" << endl;
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += a[i][j];
        }
        cout << "Sum of column " << j << " = " << sum << endl;
    }

    return 0;
}
