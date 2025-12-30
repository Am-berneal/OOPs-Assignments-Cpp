#include<iostream>
using namespace std;

// Abstract base class
class Student{
    public:
    virtual void display() = 0; // Pure virtual function
};

// Derived class Science
class Science : public Student{
    public:
    void display() {
        cout << "Science Student: Subjects include Physics, Chemistry, Maths\n";
    }
};

// Derived Class Arts
class Arts : public Student{
    public:
    void display() {
        cout << "Arts Student: Subjects include History, Geography, Political Science\n";
    }
};

// Derived Class Commerce
class Commerce : public Student {
    public:
    void display() {
         cout << "Commerce Student: Subjects include Accounts, Economics, Business Studies\n";
    }
};

int main() {
    Student* s[3];

    Science sc;
    Arts ar;
    Commerce co;

    s[0] = &sc;
    s[1] = &ar;
    s[2] = &co;

    cout << "Student Details:\n";
    for (int i = 0; i < 3; i++) {
        s[i]->display();
    }

    return 0;
}