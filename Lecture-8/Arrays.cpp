// Arrays
#include<iostream>
using namespace std;

void Print(int a[],int n){

	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

}


int main(){
	int a[100]={1,2,3,4,5,6,7,8,9};
	int n = 9;


	Print(a,n); 



	return 0; // Exit
}
