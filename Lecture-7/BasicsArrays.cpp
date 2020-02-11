// BasicsArrays
#include<iostream>
using namespace std;

int main(){

	int c[1000];
	int n1;
	cout<<"Enter the size of n1 ";
	cin>>n1;

	for(int i=0;i<n1;i++){
		cin>>c[i];
	}

	for(int i=0;i<n1;i++){
		cout<<c[i]<<' ';
	}
	cout<<endl;

	int a[100] = {1,2,3,4,5,6,7}; // Initialization
	int b[] = {1,2,3,4,5,6,7}; // Initialization
	
	int n = sizeof(b)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<b[i]<<' ';
	}
	cout<<endl;

	// cout<<a[0]<<endl;	
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;
	// .
	// .
	// .
	// .
	// .
	// cout<<a[n-1]<<endl;



	return 0;
}