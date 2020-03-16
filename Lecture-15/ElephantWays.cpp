// ElephantWays
#include <iostream>
using namespace std;

int ways(int i,int j){
	// base case
	if(i == 0 && j== 0){
		return 1;
	}

	int ans = 0;
	for(int k=0;k<=i-1;k++){
		ans += ways(k,j);
	}
	for(int k=0;k<=j-1;k++){
		ans += ways(i,k);
	}
	return ans;
}

int main(){
	int n,m;
	cin>>n>>m;

	cout<<ways(n,m)<<endl;


	return 0;
}