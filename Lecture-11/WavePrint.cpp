// WavePrint
#include<iostream> 
using namespace std;

void WavePrint(int a[][100],int r,int c){
	for(int col = 0 ; col<c ; col++){
		if(col%2 == 0){
			for(int row = 0; row<r ; row++){
				cout<<a[row][col]<<' ';
			}
		}
		else{
			for(int row = r-1; row>=0; row--){
				cout<<a[row][col]<<' ';
			}
		}
		
	}	
		cout<<endl;
	
}


int main(){

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


	WavePrint(a,row,col);

	return 0; 
}
