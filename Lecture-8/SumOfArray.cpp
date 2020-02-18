// SumOfArray
#include<iostream>
using namespace std;

int SumOfArray(int a[],int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	return sum;
}

void SumArray(int a[],int n){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	cout<<"Sum of array is : "<<sum<<endl;
}

int main(){
	int a[]={1,2,3,4,5,6};
	int n = sizeof(a)/sizeof(int);

	int ans = SumOfArray(a,n);
	cout<<ans<<endl;
	cout<<ans*10<<endl;
	cout<<ans+20<<endl;

	cout<<SumOfArray(a,n)<<endl;
	SumArray(a,n);



	return 0; // Exit
}
