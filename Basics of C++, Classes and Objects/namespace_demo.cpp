#include<iostream>
using namespace std;

//First namespace 
namespace LibraryA{
    int value=10;

    void show(){
        cout<<"LibraryA value: "<<value<<endl;
    }
};

//Second namespace
namespace LibraryB{
    int value=20;

    void show(){
        cout<<"LibraryB value: "<<value<<endl;
    }
};

int main(){
    // Accessing namespace members using scope resolution operator
    LibraryA::show();
    LibraryB::show();

    cout << "LibraryA value directly: " << LibraryA::value << endl;
    cout << "LibraryB value directly: " << LibraryB::value << endl;

    return 0;
}