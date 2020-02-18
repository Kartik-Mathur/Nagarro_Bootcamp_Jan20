// Scopes
#include<iostream>
using namespace std;

int n = 100; // it is not inside any function, so this is created inside the global scope


int main(){

	cout<<n<<endl;

	int n = 10;

	cout<<n<<endl; 

	cout<<"Global Scope "<<::n<<endl; // 100 
	::n = ::n + 10; // 110


	if(true){
		int n = 20;
		cout<<n<<endl;
		
		cout<<"Global Scope "<<::n<<endl; // 100
	}
	
		cout<<n<<endl;

	return 0; 
}
