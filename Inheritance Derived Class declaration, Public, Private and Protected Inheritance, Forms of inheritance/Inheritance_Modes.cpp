#include<iostream>
using namespace std;

class Base{
public:
    int a = 10;
protected:
    int b = 20;
private:
    int c = 30;
};

// Public Inheritance
class PublicDerived : public Base {
public:
    void show() {
        cout << "The value of a = " << a <<endl;
        cout << "The value of b = " << b << endl;
    }
};

// Protected Inheritance
class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
};

// Private Inheritance
class PrivateDerived : private Base {
public:
    void show(){
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
};

int main(){
    PublicDerived pd;
    pd.show();

    ProtectedDerived prd;
    prd.show();

    PrivateDerived prid;
    prid.show();
}