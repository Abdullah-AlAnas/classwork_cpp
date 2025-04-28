#include <iostream>
#include <string>
using namespace std;

class IIUC_Auditorium {
private:
    float area;
    float totalFloorSpace;
    string hallID;
    int maxSeatingCapacity;

public:

    IIUC_Auditorium(float a, float floorSpace, string id, int seatingCapacity) {
        area = a;
        totalFloorSpace = floorSpace;
        hallID = id;
        maxSeatingCapacity = seatingCapacity;
    }


    IIUC_Auditorium(const IIUC_Auditorium &auditorium) {
        area = auditorium.area;
        totalFloorSpace = auditorium.totalFloorSpace;
        hallID = auditorium.hallID;
        maxSeatingCapacity = auditorium.maxSeatingCapacity;
    }


    void display() {
        cout << "Area (sq ft): " << area << endl;
        cout << "Total Floor Space (sq ft): " << totalFloorSpace << endl;
        cout << "Hall ID: " << hallID << endl;
        cout << "Maximum Seating Capacity: " << maxSeatingCapacity << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {

    IIUC_Auditorium hall1(5000.0, 7500.0, "HALL101", 800);
    IIUC_Auditorium hall2(4500.0, 7000.0, "HALL102", 700);


    IIUC_Auditorium hall3 = hall1;

    cout << "Details of Hall 1:" << endl;
    hall1.display();

    cout << "Details of Hall 2:" << endl;
    hall2.display();

    cout << "Details of Hall 3 (Copy of Hall 1):" << endl;
    hall3.display();

    return 0;
}

