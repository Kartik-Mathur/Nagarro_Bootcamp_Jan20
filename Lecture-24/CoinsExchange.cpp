// CoinsExchange
#include <iostream>
using namespace std;

int CoinsExchange(int amount,int *coins,int n){
	if(amount == 0){
		return 0;
	}
	int min_coins = INT_MAX;
	for(int i=0;i<n;i++){
		int chotiAmountCoins = INT_MAX;
		if(amount>=coins[i]){
			chotiAmountCoins = CoinsExchange(amount-coins[i],coins,n);
		}
		if(chotiAmountCoins != INT_MAX){
			min_coins = min(min_coins,chotiAmountCoins+1);
		}
	}

	return min_coins;
}

int main(){
	int coins[]={1,5,7};
	int amount;
	cin>>amount;

	cout<<CoinsExchange(amount,coins,3)<<endl;



	return 0;
}