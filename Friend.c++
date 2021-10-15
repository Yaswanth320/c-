#include <iostream>
using namespace std;

// To use a function in a friend class we need to protoype the function in main class  


class yas{
    public:
        yas()
        {
            yasvar = 0; 
        }
    private: 
        int yasvar;

    friend void yasfrnd(yas &y);  // we can also use y as parameter instead of address but pass by ref is ideal
}; 
 
void yasfrnd(yas &y){
    y.yasvar = 9;
    cout  << y.yasvar << endl;
}  

int main()
{
    yas ya;
    yasfrnd(ya);
    return 0;
}