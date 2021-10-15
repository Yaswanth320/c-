
// constructors and deconstructors are not inherited by the drived class
// but the parent class constructor is called cause every time we createa object it calls its 
// baseclass constructors 
// so even if the derived class didnt inherited it class the mother class constructor 

#include<iostream>
using namespace std;

class parent         
{    
    public:  
        parent(){
            cout << "I am the parent constructor. "<< endl;
        }    
        ~parent(){
            cout << "I am the parent destructor. "<< endl;
        }       
    
};

class son : public parent               
{                     
    public:  
        son(){
            cout << "I am the son constructor. "<< endl;
        }    
        ~son(){
            cout << "I am the son destructor. "<< endl;
        }     
};

int main(){
    son s;
}

/*
    the output follows the hierarichy
    
    output :

        I am the parent constructor.     
        I am the son constructor. 
        I am the son destructor. 
        I am the parent destructor. 


*/