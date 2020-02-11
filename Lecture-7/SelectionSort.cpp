// SelectionSort
// BubbleSort
#include<iostream>
using namespace std;

int main(){

	int a[]={5,6,5,4,3,2,1,0,9};
	int n = sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	for(int i=0;i<=n-2;i++){
		int m = i;

		for(int j=i+1;j<=n-1;j++){
			if(a[j]<a[m]){
				m = j;
			}
		}

		swap(a[m],a[i]);
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;


	return 0;
}