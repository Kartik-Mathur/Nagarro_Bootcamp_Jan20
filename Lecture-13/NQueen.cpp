#include<iostream> 
using namespace std;
bool KyaPlaceKarSkteHai(int board[][10],int i,int j,int n){
	// Check Row and Column
	for(int k=0;k<n;k++){
		if(board[i][k] || board[k][j]){
			return false;
		}
	}

	// Check for right above diagnol
	int row = i;
	int col = j;

	while(i>=0 && j<n){
		if(board[i][j]){
			return false;
		}
		i--;
		j++;
	}

	i = row;
	j = col;
	// Check for left above diagnol
	while(i>=0 && j>=0){
		if(board[i][j]){
			return false;
		}
		i--;
		j--;
	}

	return true;
}

bool NQueen(int board[][10],int i,int n){
	// Base case
	if( i==n ){
		// Print the board
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(board[i][j] == 1){
					cout<<"Q ";
				}
				else{
					cout<<"_ ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	// Recursive case
	for(int j=0;j<n;j++){
		if(KyaPlaceKarSkteHai(board,i,j,n) == true){
			board[i][j] = 1; // Place the queen on the board
			bool KyaBaakiBaatBani = NQueen(board,i+1,n);
			if(KyaBaakiBaatBani == true){
				return true;
			}
			board[i][j] = 0; 
		}
	}

	return false;
}


int main(){
	int board[10][10]={0};

	int n;
	cin>>n;

	NQueen(board,0,n);

	return 0; 
}
