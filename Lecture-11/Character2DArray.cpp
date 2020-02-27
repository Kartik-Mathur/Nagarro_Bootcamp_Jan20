// Character2DArray
#include<iostream> 
using namespace std;

void Print(char a[][100],int r){
	for(int row = 0 ; row<r ; row++){
		for(int col = 0; a[row][col] != '\0' ; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}	
}


int main(){
	// Initialization
	// char a[][4]={
	// 	{'A','B','C','\0'},
	// 	{'D','E','F','\0'},
	// 	{'G','H','I','\0'}
	// };
	// char b[][100]={
	// 	"Kartik",
	// 	"Abhish",
	// 	"Aman"
	// };

	// User Input
	char a[100][100];
	int row;

	cin>>row;
	
	cin.get(); // or cin.ignore()

	for(int i=0;i<row;i++){
		cin.getline(a[i],100);
	}

	Print(a,row);

	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;

	return 0; 
}
