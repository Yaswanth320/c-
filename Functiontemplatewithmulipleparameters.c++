// templates are used to handle multiple datatypes
// calculator

#include<iostream>
using namespace std;

template <class First, class Second>  // taking two types of data 1 is INT and 2nd is DOUBLE
First smaller(First a, Second b){
    return (a < b ? a : b);
}


int main(){
    int x = 10;
    double d = 100.6;
    cout << smaller(x,d) << endl;
    
    return 0;
}