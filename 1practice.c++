#include<iostream>
using namespace std;

void print(int* a){
	cout << *a << endl;
}

int main(){
	int a = 10;
	print(&a);
}