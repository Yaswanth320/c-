// templates are used to handle multiple datatypes
// calculator

#include<iostream>
using namespace std;

template <class yas>

yas add(yas a, yas b){
    return a+b;
}

int main(){

    int a = 1,b = 2,c; // cange it to doble long dloat etc it will work
    cin >> a;
    cin >> b;
    c = add(a,b);
    cout << c << endl;

    return 0;
}