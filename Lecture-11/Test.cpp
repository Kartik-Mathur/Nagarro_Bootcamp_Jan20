#include<iostream> 
using namespace std;

void Print(int a[][100],int r,int c){
	for(int row = 0 ; row<r ; row++){
		for(int col = 0; col < c; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}	
}


int main(){
	// Initialization
	// int a[][10] = {
	// 	{1,2,3},
	// 	{4,5,6}, 
	// 	{7,8,9}
	// };

	// Print(a,3,3);

	// User Input
	int a[100][100];

	int row,col;
	cout<<"Enter rows and cols ";
	cin>>row>>col;
	int number = 1;
	for(int r = 0; r<row ; r++){
		for(int c = 0 ; c<col ; c++){
			// cin>>a[r][c];
			a[r][c] = number;
			number ++;
		}
	}


	Print(a,row,col);

	return 0; 
}
