
// main function can only use the public data members of a class not private or protected

#include<iostream>
using namespace std;

class parent         //base class
{    
    public :                        // both class other members can access the public data
        int publicvar;
    
    private:                        // only inside this variable have the access to this variable
        int privatevar;
    
    protected:                         // class has the access to it and any friend has th access to it and also the inheriting class has the access to it
        int protectedvar = 10;  // here it is like global

};

class son : public parent               //son is inheriting parent
{   
    public:
        void dosomething(){
            protectedvar = 9;       // local 
            cout << protectedvar << endl;
            //privatevar = 20;              // gives an error as it is private
            //cout << privatevar << endl;         
            publicvar = 20;
            cout << publicvar << endl;
        }
};

class grandson : public son{
    public:
    void doso(){
        //protectedvar = 10;
        cout << protectedvar << endl;
    }
};

int main(){
    parent p;
    
    son s;
    s.dosomething();

    grandson gd;
    gd.doso();


    
}