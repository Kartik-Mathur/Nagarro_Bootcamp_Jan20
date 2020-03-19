// DMA
#include<iostream> 
using namespace std;

int* CreateArray(int n){
	int *arr = new int[n];
	cout<<"In Function"<<endl;
	for(int i=0;i<n;i++){
		arr[i] = i;
	}
	return arr;	
}

int main(){
	// Two D array
	int rows,cols;
	cin>>rows>>cols;

	int **arr = new int*[rows];

	for(int i=0;i<rows;i++){
		arr[i] = new int[cols];
	}
	int number = 1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j]=number++;
		}
		// cout<<endl;
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	// int *a = new int;
	// *a = 10;
	// cout<<*a<<endl;
	// delete a;
	// a=NULL;

	// int n;
	// cin>>n;

	// int *arr = CreateArray(n);

	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<' ';
	// }

	// cout<<endl;
	// delete [] arr;
	// arr = NULL;




	return 0; 
}
