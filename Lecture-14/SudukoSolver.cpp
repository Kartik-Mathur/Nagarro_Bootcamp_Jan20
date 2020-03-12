#include<iostream> 
#include <cmath>
using namespace std;

bool isSafeToPut(int mat[][9],int i,int j,int number,int n){
	// Check for the row and column
	for(int k = 0;k<n;k++){
		if(mat[i][k] == number||mat[k][j] == number){
			return false;
		}
	}

	// check the smaller box 
	n = sqrt(n);

	int start_row = (i/n)*n;
	int start_col = (j/n)*n;

	for(int i=start_row;i<start_row+n;i++){
		for(int j=start_col;j<start_col+n;j++){
			if(mat[i][j] == number){
				return false;
			}
		}
	}

	return true;
}

bool SudokuSolver(int mat[][9],int i,int j,int n){
	// base case
	if(i == n){
		// Print the sudoku
		for(int row=0;row<n;row++){
			for(int col=0;col<n;col++){
				cout<<mat[row][col]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	if(j == n){
		return SudokuSolver(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
		return SudokuSolver(mat,i,j+1,n);
	}

	// Check for a particular cell
	for(int number = 1;number <=n ;number++){
		if(isSafeToPut(mat,i,j,number,n)){
			mat[i][j] = number;
			bool KyaBaakiBaatBani = SudokuSolver(mat,i,j+1,n);
			if(KyaBaakiBaatBani){
				return true;
			}
			mat[i][j] = 0;
		}
	}

	return false;
}


int main(){

	int mat[9][9] =
	{
	{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}
	};


	SudokuSolver(mat,0,0,9);


	return 0; 
}
