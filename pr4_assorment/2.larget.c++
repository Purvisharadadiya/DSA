#include <iostream>
using namespace std;


//develop by Largest element in the 2D array//
 main()
{
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int a[rows][cols];


    cout << "😊 Input array Element 😊:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> a[i][j];
        }
    }

    
    cout << "😊 Output Array 😊 :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

     cout << endl;
      cout << "😊😊 largest element 😊😊 :" << endl;
     
    int largest = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    cout << "Largest element in the 2D array is: " << largest << endl;

    
}
