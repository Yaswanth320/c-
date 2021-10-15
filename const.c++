
// const variables cant be updated
// constant functions are accessed with only const objects

#include<iostream>
using namespace std;

class cons{
    public:
        void print(){
            cout << "normal" << endl;
        }

        void printc() const{            // const function
            cout << "const print" << endl;
        }
    protected:
    private:

};

int main()
{
    const int a = 20 ; // we can declare and initialise the const at the same time
    // a = 39;   not possible
    cons c1;
    const cons c2; // constant object

    c1.print();
    c2.printc();
}