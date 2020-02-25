// AddressOf
#include<iostream>
using namespace std;
	
int main(){

	int a = 10;
	float f = 10.11;
	char ch = 'A';

	// cout<<a<<endl;
	// cout<<&a<<endl; // address of bucket a
	// cout<<f<<endl;
	// cout<<&f<<endl; // address of bucket f

	// cout<<ch<<endl;
	// cout<<&ch<<endl;

	// Pointers 

	int *aptr;
	// aptr = &a;

	float *fp = &f;

	// char *chptr;
	// *chptr = &ch; // Wrong way to do it
	// chptr = &ch; // Correct way to do it
	aptr = (int*)&ch;


	cout<<a<<endl; // 10
	// cout<<&a<<endl; // address
	cout<<aptr<<endl; // address
	cout<<aptr+1<<endl; // address
	cout<<(int*)&ch<<endl; // address
	cout<<(int*)(&ch+1)<<endl; // address


	// cout<<f<<endl;
	// cout<<&f<<endl;
	// cout<<fp<<endl;

	// cout<<ch<<endl;
	// cout<<(int*)&ch<<endl;
	// cout<<chptr<<endl;


	return 0; 
}
