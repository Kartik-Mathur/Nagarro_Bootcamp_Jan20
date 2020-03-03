// SumOfArray
#include<iostream> 
using namespace std;


int Sum(int *arr,int n){
	if(n == 0){
		return 0;
	}

	int ChotaAns = Sum(arr+1,n-1);
	int BadaAns = arr[0] + ChotaAns;
	return BadaAns;
}

int Sum1(int *a,int n,int i){
	if(i==n){
		return 0;
	}

	int ChotaSum = Sum1(a,n,i+1);
	int BadaSum = a[i] + ChotaSum;
	return BadaSum;
}

int main(){

	int a[]={1,2,3,4,5,10};

	int n = sizeof(a)/sizeof(int);

	cout<<Sum(a,n)<<endl;
	cout<<Sum1(a,n,0)<<endl;


	return 0; 
}
