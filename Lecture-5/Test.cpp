#include <iostream> // Header File
using namespace std; 

int main(){
	// Start of the program
	// To take Input : cin>>
	// int i;
	// int x;
	int i; // Create multiple buckets of same data types
	int x = 10; // Initialization
	// int x;
	// x = 10; // Assignment

	cin>>i; // This takes input from the user and insert it inside the bucket 'i'
	cout<<i<<endl;

	if(i%2==0){
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
	// Loops : While
	int j = 1; // init of the loop variable
	while(j<=5){ // Condition check of the loop
		cout<<j<<endl;

		j = j + 1;
	}


	// cout<<'\n'; // cout<<endl; is equivalent to cout<<'\n';

	cout<<"Hello World!"<<'\n'; 
	// cout<<'\n';
	return 0; // inside main it represents exit
}
