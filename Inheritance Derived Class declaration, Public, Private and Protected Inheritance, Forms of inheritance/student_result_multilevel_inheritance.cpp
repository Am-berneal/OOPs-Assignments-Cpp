#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int rollNo;
    string name;

public:
    void GetDetails() {
        cout << "Enter student roll number: ";
        cin >> rollNo;
        cout << "Enter name of the student: ";
        cin >> name;
    }
};

// Derived class
class Marks : public Student {
protected:
    int subject1, subject2;

public:
    void GetMarks() {
        cout << "Enter the marks of subject 1: ";
        cin >> subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> subject2;
    }
};

// Derived class
class Result : public Marks {
private:
    int total;

public:
    void CalculateResult() {
        total = subject1 + subject2;
    }

    void DisplayResult() {
        cout << rollNo << "\t" << name << "\t"
             << subject1 << "\t\t" << subject2 << "\t\t"
             << total << "\t\t";

        if (total >= 60)
            cout << "PASSED";
        else
            cout << "FAILED";

        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Result r[10];   // assuming max 10 students

    for (int i = 0; i < n; i++) {
        r[i].GetDetails();
        r[i].GetMarks();
        r[i].CalculateResult();
    }

    cout << "\nRollNo\tName\tSub1\t\tSub2\t\tTotal\t\tResult\n";
    cout << "-------------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        r[i].DisplayResult();
    }

    return 0;
}
