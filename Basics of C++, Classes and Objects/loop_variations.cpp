#include<iostream>
using namespace std;

int main(){

    cout<<"-------- FOR LOOP DEMONSTRATION --------"<<endl;

    //1. Normal for Loop
    cout << "Normal Loop: "<< endl;
    for(int i=1; i<=5; i++){
        cout<< i <<" ";
    }
    cout<<endl;

    //2. For loop without initialization
    cout << "For loop without initialization: " << endl;
    int j = 1;
    for(; j<=5; j++){
        cout<< j <<" ";
    }
    cout<<endl;

    //3. For loop without increment
    cout << "For loop without increment:" << endl;
    for(int k=1; k<=5;){
        cout << k << " ";
        k++;
    }
    cout<<endl;

    //4. Infinite for loop (controlled using break)
    cout<<"Infinite for loop (with break): "<<endl;
    int x = 1;
    for(;;){
        cout<<x<<" ";
        x++;
        if(x>5) break;
    }
    cout<<endl;


    cout << "----- WHILE LOOP DEMONSTRATIONS -----" << endl;


    // 5. Normal while loop
    cout<<"Normal While loop: "<<endl;
    int a = 1;
    while(a <= 5){
        cout << a << " ";
        a++;
    }
    cout<<endl;

    // 6. While loop without initialization in condition
    cout << "While loop with initialization before loop: " << endl;
    int b = 1;
    while(b<=5){
        cout << b <<" ";
        b++;
    }
    cout<<endl;

    // 7. Infinite while loop (with break)
    cout << "Infinite while loop (with loop): " << endl;
    int c = 1;
    while(true){
        cout << c <<" ";
        c++;

        if(c>5){
            break;
        }
    }
    cout << endl;


    cout << "----- DO-WHILE LOOP DEMONSTRATIONS -----" << endl;


    // 8. Normal do-while loop
    cout<<"Normal do-while loop: "<<endl;
    int d = 1;
    do{
        cout << d << " ";
        d++;
    }while(d<=5);
    cout<<endl;

    // 9. Do-while executes at least once
    cout << "Do-while executes at least once:" << endl;
    int e = 10;
    do {
        cout << e << " ";
    } while (e < 5);
    cout << endl;

    // 10. Infinite do-while loop (with break)
    cout << "Infinite do-while loop (with break):" << endl;
    int f = 1;
    do {
        cout << f << " ";
        f++;
        if (f > 5)
            break;
    } while (true);

    cout << endl;

    return 0;
}