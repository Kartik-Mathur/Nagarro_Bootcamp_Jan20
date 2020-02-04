// PrintAllEvenTillN
#include <iostream>
using namespace std; 

int main(){

	int n;
	cin>>n; // To print numbers from 1 to N take input of N from the user


	int i = 1;
	while(i<=n){
		if(i%2==0){
			cout<<i<<' ';
		}
		i = i + 1;
	}
	cout<<endl;
	
	i = 1;
	while(i<=n){
		cout<<i<<' ';
		
		i = i + 2;
	}
	cout<<endl;

	return 0; // inside main it represents exit
}
