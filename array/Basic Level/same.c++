#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int a[size];
    int same[size] ;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Frequencies:";
    for (int i = 0; i < size; i++)
    {
        if (same[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                same[j];
            }
        }
        cout << a[i] <<" " << count << endl;
    }

    return 0;
}
