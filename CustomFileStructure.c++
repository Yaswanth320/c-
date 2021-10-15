#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("Thefile.txt");
    cout << "Enter players Id, Name, and Money" << endl;
    // Endof the file marker or
    cout << "press ctrl+z to quit \n" << endl;  

    int idNumber;
    string name;
    double money;

    while(cin >> idNumber >> name >> money){   // runs for multiple times until we press endof file marker
        file << idNumber << ' ' << name << ' ' << money << endl;
    }

    return 0;
}