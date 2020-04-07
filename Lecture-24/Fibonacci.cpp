// Fibonacci
#include <iostream>
using namespace std;

int fibo(int n){
	if(n==1||n==0){
		return n;
	}

	return fibo(n-1)+fibo(n-2);
}

int fibo1(int n,int *dp){ // Top Down Approach
	if(n==1||n==0){
		dp[n] = n;
		return n;
	}

	// Before Calculating
	if(dp[n] != -1){
		return dp[n];
	}

	// Calculate the nth fibonacci number
	int ans = fibo1(n-1,dp)+fibo1(n-2,dp);
	dp[n] = ans; // we stored the answer for Nth Fibonacci Number, before returning the answer
	return ans;
}

int bottomUp(int n){
	int *dp = new int[n+1];

	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-2];
	}

	for(int i=0;i<=n;i++){
		cout<<dp[i]<<' ';
	}
	cout<<endl;
	return dp[n];
}

int main(){

	int n;
	cin>>n;
	int dp[10000];
	for(int i = 0;i<=n;i++){
		dp[i] = -1;
	}
	cout<<bottomUp(n)<<endl;
	cout<<fibo1(n,dp)<<endl;
	cout<<fibo(n)<<endl;

	return 0;
}