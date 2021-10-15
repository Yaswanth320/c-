/*

    arrow ( -> ) memeber selection opertor is used to point to wards a class
    when we need to access a class with a pointer

*/


#include<iostream>
using namespace std;

class sally{
    public:
        void printcrap(){
            cout << "Printing crap :" << endl;
        }
};

int main()
{
    sally s;
    sally *sp;
    s.printcrap();
    sp -> printcrap(); // pointer towards a object.
    return 0;
}