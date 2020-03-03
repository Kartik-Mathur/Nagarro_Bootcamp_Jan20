// BubbleSort
#include<iostream> 
using namespace std;

void BubbleSort(int *a,int n,int i){
	// base case
	if(i == n-1){
		return;
	}

	// Recursive case	
	for(int j=0;j<=n-2-i;j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}

	BubbleSort(a,n,i+1); // Recursion will solve for the rest of the iterations
}

void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

int main(){

	int a[]={4,2,5,6,3,1,0};
	int n = sizeof(a)/sizeof(int);
	Print(a,n);
	BubbleSort(a,n,0);
	Print(a,n);
	
	return 0; 
}
