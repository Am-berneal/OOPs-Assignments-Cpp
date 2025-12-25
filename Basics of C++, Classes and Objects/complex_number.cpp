#include<iostream>
using namespace std;

class Complex{
    //Private Without Access Specifier
    int real;
    int imaginary;

    public:
    //Function to Intialize Values
    void set(int r, int i){
        real=r;
        imaginary=i;
    }

    //Functions to Display complex number
    void display(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }

    Complex Sum(Complex&c){
        Complex result;
        result.real=real+c.real;
        result.imaginary=imaginary+c.imaginary;
    }
};

int main(){
   Complex c1, c2, c3;

   c1.set(3,4);
   c2.set(5,6);

   cout<<"Enter the 1st Complex Number: ";
   c1.display();

   cout<<"Enter the 2nd Complex Number: ";
   c2.display();

   c3=c1.Sum(c2);
   cout<<"The Sum of these Complex Numbers: ";
   c3.display();
   
}