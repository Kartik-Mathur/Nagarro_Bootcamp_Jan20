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

int main(){
	int n;
	cin>>n;
	int dp[10001];
	for(int i = 0;i<=10000;i++){
		dp[i] = -1;
	}

	cout<<NStairs(n,3,dp)<<endl;


	return 0;
}