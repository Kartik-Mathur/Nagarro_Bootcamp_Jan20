#include <iostream> // Header File
using namespace std; 

int main(){
	int n;
	cin>>n; // To print numbers from 1 to N take input of N from the user


	int i = 1;
	while(i<=n){
		cout<<i<<' ';
		i = i + 1;
	}
	cout<<endl;

	return 0; // inside main it represents exit
}
