#include <iostream>
using namespace std;

// Base class
class Fruit {
protected:
    int totalFruits;
};

// Derived class 1
class Apples : public Fruit {
private:
    int apples;
public:
    void setApples(int a) {
        apples = a;
    }

    void showApples() {
        cout << "Number of Apples = " << apples << endl;
    }

    int getApples() {
        return apples;
    }
};

// Derived class 2
class Mangoes : public Fruit {
private:
    int mangoes;
public:
    void setMangoes(int m) {
        mangoes = m;
    }

    void showMangoes() {
        cout << "Number of Mangoes = " << mangoes << endl;
    }

    int getMangoes() {
        return mangoes;
    }
};

int main() {
    Apples a;
    Mangoes m;

    a.setApples(10);
    m.setMangoes(15);

    a.showApples();
    m.showMangoes();

    int total = a.getApples() + m.getMangoes();
    cout << "Total number of fruits in the basket = " << total << endl;

    return 0;
}
