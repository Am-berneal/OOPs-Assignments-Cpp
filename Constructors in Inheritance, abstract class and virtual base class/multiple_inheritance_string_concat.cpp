#include <iostream>
#include <cstring>
using namespace std;

// Class X
class X {
protected:
    char str1[50];

public:
    // Constructor
    X() {
        cout << "Enter string for class X: ";
        cin >> str1;
    }

    // Destructor
    ~X() {
        cout << "String in class X: " << str1 << endl;
    }
};

// Class Y
class Y {
protected:
    char str2[50];

public:
    // Constructor
    Y() {
        cout << "Enter string for class Y: ";
        cin >> str2;
    }

    // Destructor
    ~Y() {
        cout << "String in class Y: " << str2 << endl;
    }
};

// Class Z (Multiple Inheritance)
class Z : public X, public Y {
private:
    char str3[100];

public:
    // Constructor
    Z() {
        strcpy(str3, str1);
        strcat(str3, str2);
    }

    // Destructor
    ~Z() {
        cout << "Concatenated string in class Z: " << str3 << endl;
    }
};

int main() {
    cout << "Creating object of class Z...\n";
    Z obj;
    cout << "Destroying object of class Z...\n";
    return 0;
}
