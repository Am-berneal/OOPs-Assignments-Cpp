#include<iostream>
using namespace std;

class Sample{
    //Private Member function
    void privatefunction(){
        cout<<"This is a private Member function."<<endl;
    }

    public:
    //Public Member Function
    void publicfunction(){
        cout<<"This is Public Member function."<<endl;
    }
};

int main(){
    Sample obj;
    //obj.privatefunction (NOT ALLOWED, Because of private)
    obj.publicfunction();
}