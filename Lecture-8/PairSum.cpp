// PairSum
#include<iostream>
using namespace std;

void PairSum(int a[],int n,int sum){

	for(int i=0;i<n;i++){
		int no1 = a[i];
		int no2 = sum-no1;
		for(int j=i+1;j<n;j++){
			if(a[j] == no2){
				cout<<no1<<","<<no2<<endl;
			}
		}
	}	
}

int main(){

	int a[]={1,4,5,8,9,0};
	int n = sizeof(a)/sizeof(int);
	int sum = 9;

	PairSum(a,n,sum);

	return 0; // Exit
}
