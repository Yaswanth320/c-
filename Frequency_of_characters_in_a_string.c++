#include<iostream>
#include<string>
using namespace std;

void noofoccurences(string str){
    int flag[str.length()];
    for(int i = 0 ; i< str.length(); i++){
        flag[i] = 0;
    }
    for(int i = 0; i<str.length(); i++){
        while(flag[i] == 0){
            int count = 0;
            for(int j = 0; j<str.length(); j++){
                if(str[i] == str[j]){
                    count++;
                    flag[j] = 1;
                }
            }
            if(flag[i] != 0){
                cout << " no of occurences of " << str[i] <<" is : "<< count << endl;
            }
        }
    }
}

int main(){
    string str = "abcsdesadgced";
    noofoccurences(str);
}