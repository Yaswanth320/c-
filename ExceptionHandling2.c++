
// Exception handling
// Calculator

#include<iostream>
using namespace std;

int main(){
    try{
        int num1;
        cout << "Enter first number :" << endl;
        cin >> num1;

        int num2;
        cout << "Enter second number :" << endl;
        cin >> num2;

        if(num2 == 0){
            throw 0;
        }
        else{
            cout << num1/num2 << endl;
        }

    }

    // ... ( to catch any kind of error)

    catch(...){
        cout << "you cant divide by 0 "<< endl;
    }


    return 0;
}