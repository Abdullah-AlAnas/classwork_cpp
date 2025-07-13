#include <iostream>
using namespace std;

int main() {
    float p, r, t;
    cout << "Enter principal, rate, and time: ";
    cin >> p >> r >> t;
    float si = (p * r * t) / 100;
    cout << "Simple Interest: " << si << endl;
    return 0;
}