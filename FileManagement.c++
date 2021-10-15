#include <iostream>
#include <fstream>  // file input and file output 
using namespace std;

int main()
{
    ofstream file ;  // we need to create a object to go through the file
    file.open("FileManagemntTutorial.txt"); // if it cannot find the file it creates a new file 

    file << "I am Yaswanth \n";
    file << "It is working file \n";
    file.close();
}