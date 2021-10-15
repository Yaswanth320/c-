//destructor : a code that runs automatically on destruction of object

#include<iostream>
using namespace std;

class sally{
    public:
        sally(){                        // constructor
            cout << "WTF!!!!" << endl;
        }

        ~sally(){                       // Destructor it cannot contain any parameters and no return value
              cout << "I'm deconstructor" << endl;
        }

       
};

int main()
{
    sally s;
    return 0;
}