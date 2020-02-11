// BinarySearch
#include<iostream>
using namespace std;

int main(){

	int a[]={1,3,5,6,7,8,9};
	int n =sizeof(a)/sizeof(int);

	int s= 0;
	int e= n-1;
	int key;
	cin>>key;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==key){
			cout<<"Key found at index "<<mid<<endl;
			break;
		}
		else if(a[mid]<key){
			s= mid +1;
		}
		else{
			e=mid-1;
		}
	}
	if(s>e){
		cout<<"Key not found"<<endl;
	}



	return 0;
}