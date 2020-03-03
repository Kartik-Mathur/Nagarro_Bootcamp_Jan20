// Fact
#include<iostream> 
using namespace std;

int fact(int n){
	// Base case - simplest problem of the bigger problem
	if(n==0){
		return 1;
	}

	return n*fact(n-1);

	// Recursive case
	// int chotiProblemSolution = fact(n-1); // Pure Assumption that recursion will tell us the smaller problem
	// // Solution

	// // Find the solution
	// int BadiPrioblemSolution = n*chotiProblemSolution;
	// return BadiPrioblemSolution;
}


int main(){

	int n;
	cin>>n;

	cout<<fact(n)<<endl;

	return 0; 
}
