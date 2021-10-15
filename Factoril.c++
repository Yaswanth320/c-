#include<iostream>
using namespace std;

class Factorial{
    public:
        /*
        Factorial(int i)
        :n(i)
        {
        }
        */
        long int fact(int n){
            if(n == 0){
                return 1;
            }
            return n * fact(n-1); 
        }

};

int main(){

    Factorial f;
    cout << f.fact(20);
    cout << endl;
    return 0;

}

