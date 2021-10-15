#include <iostream>
using namespace std;

void yas(int n){
     if(n < 10){
            cout << "you are young" << endl;
        }
     else{
            cout<<"you are old"<< endl;
        }
}

int main()
{
    int age;
    cin >> age;

    switch(age){
        case 6 : yas(6);
        break;
        case 7 : cout << " case 7";
        break;
        default: cout << " dude! you are an idiot "<< endl;
    }
}