#include <iostream>
using namespace std;

int main() {
    int i, j;

    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 6; j++) {
            if (j == 1 || i == 1 || i == 3 || (i == 2 && j == 6)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
