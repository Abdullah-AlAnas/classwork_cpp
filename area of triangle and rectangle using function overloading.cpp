#include <iostream>
using namespace std;

class AreaCalculator {
public:

    float area(float length, float width) {
        return length * width;
    }


    float area(float base, float height, bool isTriangle) {
        return 0.5 * base * height;
    }
};

int main() {
    AreaCalculator calc;

    float rectLength = 10, rectWidth = 5;
    float triBase = 8, triHeight = 4;

    cout << "Area of Rectangle: " << calc.area(rectLength, rectWidth) << endl;
    cout << "Area of Triangle: " << calc.area(triBase, triHeight, true) << endl;

    return 0;
}

