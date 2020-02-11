// LargestValue
#include<iostream>
#include <climits>
using namespace std;

int main(){

	int a[100];
	
	int n;
	cin>>n;

	int largest = INT_MIN;

	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>largest){
			largest = a[i];
		}
	}
	cout<<largest;
	cout<<endl;




	return 0;
}