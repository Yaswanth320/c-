
// Exception handling

#include<iostream>
using namespace std;

int main(){
    try{
        int momsage = 50;
        int sonsage = 34;

        if(sonsage > momsage ){
            throw 99;
        }
    }
    catch(int x){
        cout << "Son can not be older than mom, ErrorNumber : "<< x<< endl;
    }


    return 0;
}