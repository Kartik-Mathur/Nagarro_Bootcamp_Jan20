// LinearSearch
// BasicsArrays
#include<iostream>
using namespace std;

int main(){

	int a[] = {1,2,3,4,5,6,7}; // Initialization
	
	int n = sizeof(a)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}

	cout<<endl;

	int key;
	cin>>key;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Key found at the index "<<i<<endl;
			break;
		}
	}

	if(i==n){
		cout<<"Key not found"<<endl;
	}





	return 0;
}