#include <iostream>
using namespace std;

class Operation {
public:
    // Overloaded function with two int arguments
    int calculate(int a, int b) {
        return a + b;  // Addition
    }

    // Overloaded function with three int arguments
    int calculate(int a, int b, int c) {
        return a * b * c;  // Multiplication
    }

    // Overloaded function with two float arguments
    float calculate(float a, float b) {
        return a / b;  // Division
    }

    // Overloaded function with one float argument
    float calculate(float a) {
        return a * a;  // Square
    }
};

int main() {
    Operation op;

    cout << "Addition (int, int): " << op.calculate(10, 5) << endl;
    cout << "Multiplication (int, int, int): " << op.calculate(2, 3, 4) << endl;
    cout << "Division (float, float): " << op.calculate(10.0f, 2.0f) << endl;
    cout << "Square (float): " << op.calculate(4.5f) << endl;

    return 0;
}

