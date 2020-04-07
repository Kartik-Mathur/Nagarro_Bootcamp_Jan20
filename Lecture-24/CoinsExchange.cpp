// CoinsExchange
#include <iostream>
using namespace std;

// int CoinsExchange(int amount,int *coins,int n){
// 	if(amount == 0){
// 		return 0;
// 	}
// 	int min_coins = INT_MAX;
// 	for(int i=0;i<n;i++){
// 		int chotiAmountCoins = INT_MAX;
// 		if(amount>=coins[i]){
// 			chotiAmountCoins = CoinsExchange(amount-coins[i],coins,n);
// 		}
// 		if(chotiAmountCoins != INT_MAX){
// 			min_coins = min(min_coins,chotiAmountCoins+1);
// 		}
// 	}

// 	return min_coins;
// }

int CoinsExchange(int amount,int *coins,int n,int *dp){
	if(amount == 0){
		dp[amount] = 0;
		return 0;
	}
	if(dp[amount]!=-1){
		return dp[amount];
	}

	int min_coins = INT_MAX;
	for(int i=0;i<n;i++){
		int chotiAmountCoins = INT_MAX;
		if(amount>=coins[i]){
			chotiAmountCoins = CoinsExchange(amount-coins[i],coins,n,dp);
		}
		if(chotiAmountCoins != INT_MAX){
			min_coins = min(min_coins,chotiAmountCoins+1);
		}
	}
	dp[amount] = min_coins;
	return min_coins;
}

int bottomUp(int amount,int *coins,int n){
	int *dp = new int[amount+1];
	dp[0] = 0;

	for(int rupay = 1;rupay<=amount;rupay++){
		int ans = INT_MAX;
		for(int j=0;j<n;j++){
			if(rupay>=coins[j]){
				ans = min(ans,dp[rupay-coins[j]]);
			}
		}
		if(ans != INT_MAX){
			dp[rupay] = ans+1;
		}
	}
	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<' ';
	}
	cout<<endl;
	return dp[amount];
}

int main(){
	int coins[]={1,2,5};
	int amount;
	cin>>amount;

	int dp[10000];
	for(int i = 0;i<=3;i++){
		dp[i] = -1;
	}
	cout<<bottomUp(amount,coins,3)<<endl;
	cout<<CoinsExchange(amount,coins,3,dp)<<endl;



	return 0;
}