// isSorted
#include<iostream> 
using namespace std;

bool isSorted(int *a,int n){
	if(n==0||n==1){
		return true;
	}

	bool KyaChotaArraySortedHai = isSorted(a+1,n-1); // Assumption 
	
	if(a[0]<a[1] && KyaChotaArraySortedHai == true){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	int a[]={1,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(int);




	return 0; 
}
