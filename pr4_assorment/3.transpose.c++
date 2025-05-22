
#include <iostream>
using namespace std;

// tarnspose  of 2d array//
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
    cout << " 😊 tarnspose  element 😊";
    for (int i = 0; i < col; i++)
    {

        for (int j = 0; j < row; j++)
        {

            cout << a[j][i] << " ";
        }

        cout << endl;
    }
}