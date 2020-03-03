// BinarySearch
#include<iostream> 
using namespace std;

int BinarySearch(int *a,int s,int e,int key){

	// base case
	if(s>e){
		return -1;
	}

	// Recursive case
	int mid = (s+e)/2;
	if(a[mid] == key){
		return mid;
	}
	else if(a[mid]<key){
		return BinarySearch(a,mid+1,e,key);
	}
	else{
		return BinarySearch(a,s,mid-1,key);
	}
}

void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}


int main(){

	int a[]={1,2,4,5,6,7,9,10};
	int n = sizeof(a)/sizeof(int);
	int key;

	Print(a,n);
	cin>>key;
	
	cout<<BinarySearch(a,0,n-1,key)<<endl;

	return 0; 
}
