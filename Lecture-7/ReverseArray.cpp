// ReverseArray
// BasicsArrays
#include<iostream>
using namespace std;

int main(){

	int c[1000];
	int n1;
	cout<<"Enter the size of n1(max 1000) ";
	cin>>n1;

	for(int i=0;i<n1;i++){
		cin>>c[i];
	}

	for(int i=n1-1;i>=0;i--){
		cout<<c[i]<<' ';
	}
	cout<<endl;




	return 0;
}