// constructors

#include<iostream>
using namespace std;

class constr{
    public:
    // constructors are generally made to get the variables there initail values
    constr(string z){
        cout << "constructor created!" << endl;
        setname(z);
    }
    void setname(string x){
            name = x;
        }
    string getname(){
            return name;
        } 
    private:
        string name;
};

int main(){
	constr cs("Yaswanth"); // when an object is created the constructor is created
    cout << cs.getname() << endl;
	return 0;
} 