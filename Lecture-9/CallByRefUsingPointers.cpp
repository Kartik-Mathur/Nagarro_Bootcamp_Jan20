// CallByRefUsingPointers
#include <iostream>
using namespace std;


void update(int *x){
	*x = *x + 1 ;
}

void Print(int *a,int n){

	for(int i=0;i<n;i++){
		// cout<<a[i]<<' ';
		cout<<*(a+i)<<' ';
	}
	cout<<endl;
}


// bubble sort algorithm using pointers instead of arrays  - ????????????????????
void bubbleSort(int *a,int n){

}


	
int main(){

	int a[]={8,7,6,6,5,4,3,2,12,1};
	int n = sizeof(a)/sizeof(int);
	Print(a,n);
	bubbleSort(a,n);
	Print(a,n);

	// int a = 10;


	// cout<<a<<endl; // 10
	// update(&a);
	// cout<<a<<endl; // 10 or 11 

	// int *x = 0;
	// // cout<<x<<endl;
	// cout<<*x <<endl; // garbage


	return 0; 
}