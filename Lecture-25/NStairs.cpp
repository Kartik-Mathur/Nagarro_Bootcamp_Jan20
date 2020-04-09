// N_StairCase
#include <iostream>
using namespace std;

int NStairs(int n,int k,int *dp){
	if(n==0){
		dp[n] = 1;
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}

	int ans = 0;
	for(int i=1;i<=k;i++){
		ans += NStairs(n-i,k,dp);
	}
	dp[n] = ans;
	return ans;
}

int bottomUp(int n,int k){

	int *dp = new int [n+1];
	dp[0] = 1;

	// Iterate over the remaning stairs
	for(int stair = 1;stair<=n;stair++){
		// For every stair iterate over the previous k stairs and their addition will be the answer
		int sum = 0;
		for(int i=1;i<=k;i++){
			if(stair-i>=0){
				sum += dp[stair-i];
			}
		}
		dp[stair] = sum;
	}

	for(int i=0;i<=n;i++){
		cout<<dp[i]<<' ';
	}
	cout<<endl;
	return dp[n];
}

int FastStairs(int n,int k){
	int *dp = new int[n+1];
	dp[0] = dp[1] = 1;

	for(int stair = 2;stair<=n;stair++){
		if(stair-k>=0){
			dp[stair] = 2*dp[stair-1]-dp[stair-k-1];
		}
		else{
			dp[stair] = 2*dp[stair-1];
		}
	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<' ';
	}
	cout<<endl;
	return dp[n];	
}


int main(){
	int n,k;
	cin>>n>>k;
	int dp[100001];
	for(int i = 0;i<=100001;i++){
		dp[i] = -1;
	}
	cout<<FastStairs(n,k)<<endl;
	cout<<bottomUp(n,k)<<endl;
	cout<<NStairs(n,k,dp)<<endl;


	return 0;
}