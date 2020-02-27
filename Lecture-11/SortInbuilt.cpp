// SortInbuilt
#include<iostream> 
#include <algorithm>
using namespace std;

void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

bool compare123(int a,int b){
	return a<b;
}

int main(){

	int a[] = {9,7,6,1,2,4,5,7,8,0};
	int n = sizeof(a)/sizeof(int);

	Print(a,n);

	sort(a,a+n,compare123);

	Print(a,n);



	return 0; 
}
