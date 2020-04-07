// MinStepsToOne
#include <iostream>
using namespace std;

int MinStepsToOne(int n,int *dp){
	// Base case
	if(n==1){
		dp[n] = 0;
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	if(n%3 == 0){
		op1 = MinStepsToOne(n/3,dp)+1;
	}
	if(n%2 == 0){
		op2 = MinStepsToOne(n/2,dp)+1;
	}
	op3 = MinStepsToOne(n-1,dp)+1;
	
	dp[n] = min(op1,min(op2,op3));
	return min(op1,min(op2,op3));
}

int bottomUp(int n){
	int *dp = new int[n+1];
	dp[1] = 0;
	for(int i=2;i<=n;i++){
		int op1,op2,op3;
		op1=op2=op3=INT_MAX;
		if(i%3 == 0){
			op1 = dp[i/3]+1;
		}
		if(i%2 == 0){
			op2 = dp[i/2]+1;
		}
		op3 = dp[i-1]+1;
		dp[i] = min(op1,min(op2,op3));
	}
	for(int i=1;i<=n;i++){
		cout<<dp[i]<<' ';
	}
	cout<<endl;
	return dp[n];
}

int main(){

	int n;
	cin>>n;

	int dp[10000];
	for(int i = 0;i<=10000;i++){
		dp[i] = -1;
	}
	cout<<bottomUp(n)<<endl;
	cout<<MinStepsToOne(n,dp)<<endl;


	return 0;
}