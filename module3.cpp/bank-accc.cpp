#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNo;

public:
    void setStudentDetails(string n, int a, int r) {
        setPersonDetails(n, a);
        rollNo = r;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string s) {
        setPersonDetails(n, a);
        subject = s;
    }

    void displayTeacherDetails() {
        displayPersonDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.setStudentDetails("manthan", 20, 101);
    t.setTeacherDetails("virat", 40, "Mathematics");

    cout << "Student Details:" << endl;
    s.displayStudentDetails();

    cout << "\nTeacher Details:" << endl;
    t.displayTeacherDetails();

    return 0;
}
