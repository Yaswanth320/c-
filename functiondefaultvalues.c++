#include <iostream>
using namespace std;
void volume(int l = 1, int b = 1, int h = 1);

int main()
{
    volume(10,20,30);
}

void volume(int l, int b, int h){
    int volumee = l * b * h;
    cout << volumee << endl;
    
}