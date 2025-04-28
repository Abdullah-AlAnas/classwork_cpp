#include <iostream>
#include <string>
using namespace std;

class University_Student {
private:
    string name;
    string studentID;
    string department;
    float cgpa;

public:

    University_Student(string n, string id, string dept, float c) {
        name = n;
        studentID = id;
        department = dept;
        cgpa = c;
    }


    University_Student(const University_Student &student) {
        name = student.name;
        studentID = student.studentID;
        department = student.department;
        cgpa = student.cgpa;
    }


    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Department: " << department << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {

    University_Student student1("Alice Johnson", "EE2025001", "Electrical Engineering", 3.75);
    University_Student student2("Bob Smith", "CSE2025002", "Computer Science", 3.85);


    University_Student student3 = student1;

    cout << "Details of Student 1:" << endl;
    student1.display();

    cout << "Details of Student 2:" << endl;
    student2.display();

    cout << "Details of Student 3 (Copy of Student 1):" << endl;
    student3.display();

    return 0;
}

