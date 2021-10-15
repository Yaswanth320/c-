#include<iostream>
#include<string>
using namespace std;

class stringss{
    // get and set function
    // making public variables isnt recomended so create a public functions to set then rather than make the varaibles public
    // it is a bad practice
    public:
        void setname(string x){
            name = x;
        }
        string getname(){
            return name;
        }

    private:
        string name;
};
int main()
{
    stringss s;
    s. setname("done!");
    cout << s. getname() << endl;
    return 0;
} 