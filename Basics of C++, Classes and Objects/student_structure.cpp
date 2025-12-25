#include<iostream>
using namespace std;

struct Student{
    //Data Members
    string name;
    int RollNo;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    //Member Functions
    void addDetails(){
        cout<<"Enter Name: ";
        getline(cin, name);

        cout<<"Enter Roll Number: ";
        cin>>RollNo;
        cin.ignore();

        cout<<"Enter the Degree: ";
        getline(cin, Degree);

        cout<<"Enter the Hostel: ";
        getline(cin, Hostel);

        cout<<"Enter the Current CGPA: ";
        cin.ignore();
    }

    void UpdateDetails(){
        cout<<"Enter New Name: ";
        getline(cin, name);

        cout<<"Enter New Degree: ";
        getline(cin, Degree);
    }

    void UpdateCGPA(){
        cout<<"Enter the Updated CGPA: ";
        cin.ignore();
    }

    void UpdateHostel(){
        cout<<"Enter the Updated Hostel: ";
        getline(cin, Hostel);
    }
};

int main(){
    Student s;
    s.addDetails();
    s.UpdateDetails();
    s.UpdateCGPA();
    s.UpdateHostel();
}