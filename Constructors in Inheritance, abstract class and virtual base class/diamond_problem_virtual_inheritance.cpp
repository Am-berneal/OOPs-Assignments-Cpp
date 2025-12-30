#include<iostream>
using namespace std;

/*
ASSUMPTIONS:
1. Class A is the base class.
2. Classes B and C are derived from A using VIRTUAL inheritance to avoid duplication of data members of class A.
3. Class D is derived from both B and C (diamond structure).
4. Virtual base class ensures only ONE copy of A exists in D.
*/

// Base class
class A {
protected:
    int x;
public:
    A() {
        x = 10;
        cout << "Constructor of A is called\n";
    }
};


// Derived class B
class B : virtual public A{
public:
    B() {
        cout << "Constructor of B is called\n";
    }
};

// Deirved class C
class C : virtual public A{
public:
    C() {
        cout << "Constructor of C is called\n";
    }
};

// Derived class D (Hybrid / Diamond)
class D : public B, public C {
public:
    D() {
        cout << "Constructor of D is called\n";
    }

    void display() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    D obj;
    obj.display();
    return 0;
}