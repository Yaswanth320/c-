
// main function can only use the public data members of a class not private or protected

#include<iostream>
using namespace std;

class parent         //base class
{    
    public:            
    void sayname(){
        cout << "Base class is called :" << endl;
    }
};

class son : public parent               //son is inheriting parent
{                      // derived class

};

int main(){
    parent p;
    p.sayname();

    son s;
    s.sayname(); 
}