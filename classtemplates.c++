
#include<iostream>
using namespace std;

template <class T>
class Yas{
    T first, second;
    public:
    Yas(T a , T b){
        first = a;
        second = b;
    }
    T bigger();
};

template <class T> // we need to define it again because we are using the function of the class outside the class with the template
T Yas<T>::bigger(){
    return(first>second?first:second);
} 

int main(){
    Yas<int> y(10,20);
    cout << y.bigger() << endl;
    return 0;
}