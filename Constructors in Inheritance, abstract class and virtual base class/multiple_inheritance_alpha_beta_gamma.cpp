#include<iostream>
using namespace std;

// Base class Alpha
class Alpha{
    int a;
public:
    // Constructor
    Alpha() {
        cout << "Enter the value of a = ";
        cin >> a;
    }

    // Destructor
    ~Alpha() {
        cout << "Alpha value = " << a << endl;
    }
};

// Base class Beta
class Beta{
    int b;
public:
    // Constructor
    Beta() {
        cout << "Enter the value of b = " << endl;
        cin >> b;
    }

    // Destructor
    ~Beta() {
        cout << "Beta value = " << b << endl;
    }
};

// Derived class Gamma (Multiple Inheritance)
class Gamma : public Alpha, public Beta {
    int c;
public:
    // Constructor 
    Gamma() {
        cout << "Enter the value of c = ";
        cin >> c;
    }

    // Destructor
    ~Gamma() {
        cout << "Gamma value = " << c << endl;
    }
};

int main(){
    cout << "Creating Gamma Object...\n";
    Gamma obj;
    cout << "Destroying Gamma Object...\n";
    return 0;
}