#include<iostream>
using namespace std;
//it is an interval search

void sorting(int* arr, int s){
    for(int i = 0; i< s; i++){
        for(int j = i + 1; j< s; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void binarysearch(int* arr, int e, int s){
    int start = 0, mid = 0, end = s-1;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == e){
            cout << mid << endl;
            break;
        }
        else if(e < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
    }
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int f = 8;
    sorting( arr,size);
    binarysearch(arr,f, size);
}