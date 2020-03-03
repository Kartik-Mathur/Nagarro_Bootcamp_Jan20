// Fibonacci
#include<iostream> 
using namespace std;

int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}
	return fibo(n-1)+fibo(n-2);
	
	// // Recursive case
	// int chotiProblem1 = fibo(n-1);
	// int chotiProblem2 = fibo(n-2);

	// // SOlution
	// int BadiProblem = chotiProblem1 + chotiProblem2;
	// return BadiProblem;
}


int main(){

	int n;
	cin>>n;

	cout<<fibo(n)<<endl;


	return 0; 
}
