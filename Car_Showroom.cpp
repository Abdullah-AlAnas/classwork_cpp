#include <iostream>
#include <string>
using namespace std;

class Car_Showroom {
private:
    string showroomName;
    int numberOfCars;
    float showroomArea;
    string showroomID;

public:

    Car_Showroom(string name, int cars, float area, string id) {
        showroomName = name;
        numberOfCars = cars;
        showroomArea = area;
        showroomID = id;
    }


    Car_Showroom(const Car_Showroom &showroom) {
        showroomName = showroom.showroomName;
        numberOfCars = showroom.numberOfCars;
        showroomArea = showroom.showroomArea;
        showroomID = showroom.showroomID;
    }


    void display() {
        cout << "Showroom Name: " << showroomName << endl;
        cout << "Number of Cars Available: " << numberOfCars << endl;
        cout << "Showroom Area (sq ft): " << showroomArea << endl;
        cout << "Showroom ID: " << showroomID << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {

    Car_Showroom showroom1("Elite Motors", 50, 15000.5, "SRM001");
    Car_Showroom showroom2("Luxury Wheels", 30, 12000.75, "SRM002");


    Car_Showroom showroom3 = showroom1;

    cout << "Details of Showroom 1:" << endl;
    showroom1.display();

    cout << "Details of Showroom 2:" << endl;
    showroom2.display();

    cout << "Details of Showroom 3 (Copy of Showroom 1):" << endl;
    showroom3.display();

    return 0;
}

