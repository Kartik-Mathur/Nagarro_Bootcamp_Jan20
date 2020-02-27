// SpiralPrint
#include<iostream> 
using namespace std;

void SpiralPrint(int a[][100],int r,int c){
	int sr = 0,er = r-1,sc = 0,ec = c-1;
	while(sr<=er && sc<=ec){
		// Print sr
		// from sc till ec
		for(int col = sc;col<=ec;col++){
			cout<<a[sr][col]<<' ';
		}
		sr++;
		// Print ec from sr till er
		for(int row = sr;row<=er;row++){
			cout<<a[row][ec]<<' ';
		}
		ec--;

		// Print er from ec till sc
		if(sr<er){
			for(int col = ec;col>=sc;col--){
				cout<<a[er][col]<<' ';
			}
			er --;
		}

		// Print sc from er till sr
		if(sc<ec){
			for(int row=er;row>=sr;row--){
				cout<<a[row][sc]<<' ';
			}
			sc++;
		}
	}
	cout<<endl;
}

void Print(int a[][100],int r,int c){
	for(int row = 0 ; row<r ; row++){
		for(int col = 0; col < c; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}	
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
	Print(a,row,col);

	SpiralPrint(a,row,col);

	return 0; 
}
