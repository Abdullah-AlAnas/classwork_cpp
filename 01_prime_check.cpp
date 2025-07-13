#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) isPrime = false;
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    cout << (isPrime ? "Prime" : "Not Prime") << endl;
    return 0;
}