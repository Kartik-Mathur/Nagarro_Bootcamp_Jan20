// 

#include<iostream> 
using namespace std;

int Nstairs(int n){
	// Base case
	if(n == 0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	// Recursive case
	return Nstairs(n-1)+Nstairs(n-2)+Nstairs(n-3);
}

int nstair(int n,int k=3){
	// Base case
	if(n == 0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// Recursive case
	int ans = 0;
	for(int i = 1; i<=k ;i++){
		ans += nstair(n-i,k);
	}
	return ans;
}

int main(){
	int n;
	cin>>n;


	cout<<Nstairs(n)<<endl;
	cout<<nstair(n)<<endl;

	return 0; 
}
