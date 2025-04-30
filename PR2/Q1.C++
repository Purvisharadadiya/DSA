#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    do {
        cout << ch << "\t";
        ch = ch + 4;  
        if (ch <= 'z')
            continue;
        else
            break;
    } while (ch <= 'z');

    return 0;
}
