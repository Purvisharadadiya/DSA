#include <iostream>
using namespace std;


template <typename T>
class Calculator {
private:
    T num1, num2;
public:
   
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
   
    Calculator<int> intCalc(10, 5);
    cout << "Int Add: " << intCalc.add() << endl;
    cout << "Int Subtract: " << intCalc.subtract() << endl;

    
    Calculator<float> floatCalc(10.5, 3.2);
    cout << "Float Multiply: " << floatCalc.multiply() << endl;
    cout << "Float Divide: " << floatCalc.divide() << endl;

    return 0;
}
