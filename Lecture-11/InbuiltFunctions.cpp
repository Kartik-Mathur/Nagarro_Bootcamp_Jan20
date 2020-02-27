// InbuiltFunctions
#include <iostream>
using namespace std;

int main(){

	char a[100];
	cin>>a;

	cout<<strlen(a)<<endl;
	char b[100]="Manuj";

	// b = a; // Not allowed on character arrays
	strcpy(b,a);
	// cout<<b<<endl;

	// strcat(b,a); // b+=a
	cout<<b<<endl;

	if(strcmp(a,b) == 0){ 
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}


	return 0;
}