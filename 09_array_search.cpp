#include <iostream>
using namespace std;

int main() {
    int arr[10], num, found = 0;
    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "Enter number to search: ";
    cin >> num;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }
    cout << (found ? "Found" : "Not found") << endl;
    return 0;
}