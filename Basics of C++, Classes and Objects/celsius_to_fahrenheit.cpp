#include<iostream>
using namespace std;

int main(){
    float celsius, fahrenheit;

    cout<<"Enter the temperature in celsius: ";
    cin>>celsius;

    //Conversion
    fahrenheit=(celsius*9)/5+32;

    cout<<"The temperature in Fahenheit: "<<fahrenheit<<" F"<<endl;
}