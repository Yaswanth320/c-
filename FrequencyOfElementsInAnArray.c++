#include <iostream>
using namespace std;

int main(){
    
    int n ; // no of elements of an array
    cin >> n;
    int arr[n];
    // Input Array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // create a frequency array and initialize to zero
    int flag[n];
    cout << "Frequency of the Elements:" << endl;
    int count;

    for(int i = 0; i<n;i++){
        count = 0;
        if(flag[i] != 1){                            //we need this to print the number frequency just one instead of many times
            for(int j = 0; j<n; j++){
                if(arr[i] == arr[j]){
                    count++;
                    flag[j] = 1;
                }
            }
            if( count > 1 || count ==1){
                cout << arr[i] << "occurs : "<< count << endl;
            }
        }
    }


}