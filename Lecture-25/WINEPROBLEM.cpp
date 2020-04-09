// WINEPROBLEM
#include <iostream>
using namespace std;
// int Wine(int* price,int left,int right,int day){
// 	// base case
// 	if(left>right){
// 		return 0;
// 	}

// 	int op1 = price[left]*day + Wine(price,left+1,right,day+1);
// 	int op2 = price[right]*day + Wine(price,left,right-1,day+1);

// 	return max(op1,op2);
// }

int Wine(int* price,int left,int right,int day,int dp[][100]){
	// base case
	if(left>right){
		dp[left][right] = 0;
		return 0;
	}
	if(dp[left][right]!=-1){
		return dp[left][right];
	}

	int op1 = price[left]*day + Wine(price,left+1,right,day+1,dp);
	int op2 = price[right]*day + Wine(price,left,right-1,day+1,dp);
	dp[left][right] = max(op1,op2); 
	return max(op1,op2);
}

int bottomUp(int *price,int n){
	int dp[100][100] = {0};

	for(int i=n;i>=1;i--){

		for(int j=1;j<=n;j++){
			if(i>j){
				dp[i][j] = 0;
			}
			else{
				int day = (n-(j-i));
				int op1 = price[i-1]*day + dp[i+1][j];
				int op2 = price[j-1]*day + dp[i][j-1];
				dp[i][j] = max(op1,op2);
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}
	return dp[1][n];
}

int main(){

	int price[] = {2,3,5,1,4};
	int n = sizeof(price)/sizeof(int);
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j] = -1;
		}
	}
	cout<<bottomUp(price,n)<<endl;
	cout<<Wine(price,0,n-1,1,dp)<<endl;
	

	return 0;
}
