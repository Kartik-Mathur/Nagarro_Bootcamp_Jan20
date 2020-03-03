// PrintNumbers
#include<iostream> 
using namespace std;

void Print(int n){
	// Base case
	if(n == 0){
		return;
	}

	// Recursive case
	Print(n-1);
	cout<<n<<" ";
	
}


int main(){

	int n;
	cin>>n;

	Print(n);
	cout<<endl;
	return 0; 
}
