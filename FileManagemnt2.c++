#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream File2("FileManagent2.txt"); // define and open a dock at the same time

    File2 << "File 2 is created \n";

    // to check if a file is open or not or associated with a file object
    // use ( is_open() ) Function
    if(File2.is_open()){
        cout << "Ok the file is open "<< endl;
    }else{
        cout << "File is not open "<< endl;
    }

    File2.close();


}