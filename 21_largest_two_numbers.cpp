#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Largest: " << (a > b ? a : b) << endl;
    return 0;
}