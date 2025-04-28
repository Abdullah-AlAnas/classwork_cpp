#include <iostream>
using namespace std;


int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


float divide(int a, int b) {
    if (b != 0)
        return static_cast<float>(a) / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    int num1 = 10, num2 = 5;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;

    return 0;
}

