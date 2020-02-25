// LengthOfString
#include<iostream> 
#include <cstring> // Header file
using namespace std;
	
int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}


int main(){

	char a[100],b[]="Kartik";
	char c[] = "We are learning Strings"; // You can skip size while initalization

	cout<<b<<endl;
	cin.getline(a,100,'1');
	// cin.getline(b,100);

	cout<<a<<endl;
	// cout<<b<<endl;
	cout<<length(a)<<endl;
	cout<<strlen(a)<<endl; // Inbuilt Function to calculate Length
	cout<<sizeof(a)<<endl;

	return 0; 
}
