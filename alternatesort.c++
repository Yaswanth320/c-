#include<iostream>
#include<vector>
using namespace std;
vector<int> alternatesort(vector<int> arr, int n){
    vector<int> answer;
    int i=0, j=0, temp = 0;
    // Sorting
    for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
    int s = 0, e = n-1;
    while(s<e){
        answer.push_back(arr[e--]);
        answer.push_back(arr[s++]);
    }
    // if the vector is of odd size arranging the missle element
    if(n%2 != 0){
        answer.push_back(arr[s]);
    }
    return answer;
}

int main(){
    int arr_size;
    cin >> arr_size;
    vector <int> arr;
    for(unsigned int idx = 0; idx < arr_size; idx++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    //output
    vector<int> result = alternatesort(arr, arr_size);
    for(unsigned int i = 0; i < result.size(); i++ ){
        cout << result[i] <<" ";
    }
    cout << endl;
}