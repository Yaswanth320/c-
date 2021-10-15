#include<iostream>
using namespace std;

// function overriding is only possible with inheritence
// if derived class defines same function as defined in ts base class it is known as function overriding n c++
// if you create a obj of derived class and call the function then the derived class function is called and base class function is ignored

class base{
    public:
    void print(){
        cout << " base class" << endl;
    }
};

class derived : public base{
    public:
    void print(){
        cout << " derived class "<< endl;
        base::print(); // with this we can call the base class function
    }
    
};
int main(){
    base b;
    derived d;
    d.print();
    //b.print();

    return 0;
}