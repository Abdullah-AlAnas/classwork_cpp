#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string libraryName;
    int totalBooks;
    int sittingCapacity;
    string libraryID;

public:

    Library(string name, int books, int capacity, string id) {
        libraryName = name;
        totalBooks = books;
        sittingCapacity = capacity;
        libraryID = id;
    }


    Library(const Library &lib) {
        libraryName = lib.libraryName;
        totalBooks = lib.totalBooks;
        sittingCapacity = lib.sittingCapacity;
        libraryID = lib.libraryID;
    }


    void display() {
        cout << "Library Name: " << libraryName << endl;
        cout << "Total Number of Books: " << totalBooks << endl;
        cout << "Total Sitting Capacity: " << sittingCapacity << endl;
        cout << "Library ID: " << libraryID << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {

    Library lib1("Central Library", 50000, 300, "LIB1001");
    Library lib2("Science Library", 20000, 150, "LIB1002");


    Library lib3 = lib1;

    cout << "Details of Library 1:" << endl;
    lib1.display();

    cout << "Details of Library 2:" << endl;
    lib2.display();

    cout << "Details of Library 3 (Copy of Library 1):" << endl;
    lib3.display();

    return 0;
}

