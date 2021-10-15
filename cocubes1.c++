#include<iostream>
using namespace std;
int main()
{
    char str[20]={'a','a','a','a'};
    int s = sizeof(str);
    
    //cout<<str[2];
    
    int c = s/2;
    //cout<<c;
    int n = 0;
    cin>> n;
    char cha;
    cin>> cha;

    int l = s+n;
    

    for(int i =s; i>c; i--){
        str[i]= str[i-n];
    }

    int t = s+n;
    for(int i= c; i < c+n; i++ ){
        str[i]= cha;
    }
    
    for(int i =0; i<(s+n); i++){
        cout<<str[i];
    }

    


}