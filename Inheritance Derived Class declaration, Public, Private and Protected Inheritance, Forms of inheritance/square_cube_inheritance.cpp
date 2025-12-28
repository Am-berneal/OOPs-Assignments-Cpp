#include<iostream>
using namespace std;

// Base Class
class Number{
protected:
    int x;

public:
    void set(int n){
        x = n;
    } 
};

// Derived class 1
class Square : public Number{
public:
    void showSquare() {
        cout << "Square of " << x << " = " << x * x <<endl;
    }
};

// Derived class 2
class Cube : public Number{
    public:
    void showCube() {
        cout << "Cube of " << x << " = " << x * x * x << endl;
    }
};

int main(){
    Square s;
    Cube c;

    s.set(50);
    s.showSquare();

    c.set(50);
    c.showCube();

}