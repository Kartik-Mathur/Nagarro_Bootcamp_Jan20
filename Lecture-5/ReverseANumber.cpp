// ReverseANumber
#include <iostream> // Header File
using namespace std; 

int main(){
	int n;
	cin>>n; // User input of n : 1234
	/*
	This is
	Multiline 
	comment
	*/


	for( ;n!=0;n=n/10){
		cout<<n%10;
	}
	cout<<endl;

	return 0; // inside main it represents exit
}
