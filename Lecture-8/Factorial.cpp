// Factorial
#include<iostream>
using namespace std;

int fact(int x){

	int ans = 1;
	for(int i=1;i<=x;i++){
		ans *= i;
	}
	return ans;
}

int nCr(int n,int r){
	int fact_N = fact(n);
	int fact_R = fact(r);
	int fact_NR = fact(n-r);

	int ans = fact_N/(fact_R*fact_NR);

	return ans;
}


int main(){

	int n,r;
	cin>>n>>r;

	// int ans = fact(n);
	int ans = nCr(n,r);

	cout<<ans<<endl;



	return 0; // Exit
}
