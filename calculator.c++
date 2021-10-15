
#include<iostream>  // preprocessor directive is a standard library which contains input and output stream
using namespace std; // std library it contains all the standary libary files


int main()					// Functions
{
	int a;
	int b;
	int sum;
	cout << "Enter A:\n";
	cin >> a; 
	cout << "Enter B:\n";
	cin >> b;
	sum = a+b;
	
	cout << "the sum is:"<<sum << endl;
	return 0;
}
