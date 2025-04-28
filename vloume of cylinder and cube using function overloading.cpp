#include <iostream>
using namespace std;

class VolumeCalculator {
public:
    // cube
    float volume(float side) {
        return side * side * side;
    }

    // cylinder
    float volume(float radius, float height) {
        return 3.1416 * radius * radius * height;
    }
};

int main() {
    VolumeCalculator calc;

    float cubeSide = 3;
    float cylRadius = 2, cylHeight = 5;

    cout << "Volume of Cube: " << calc.volume(cubeSide) << " cubic units" << endl;
    cout << "Volume of Cylinder: " << calc.volume(cylRadius, cylHeight) << " cubic units" << endl;

    return 0;
}

