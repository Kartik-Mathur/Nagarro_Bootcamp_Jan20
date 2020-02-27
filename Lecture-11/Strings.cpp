// Strings
#include<iostream> 
using namespace std;


int main(){
	// string s;// Single String
	// Array of Strings
	string s[100]={
		"Jai",
		"Veeru",
		"Gabbar",
		"Thakur"
	};
	int n;
	n = 3;

	// for(int i=0;i<3;i++){
	// 	getline(cin,s[i]);
	// }

	for(int i=0;i<4;i++){
		cout<<s[i]<<endl;
	}

	// for(int i=0;i<3;i++){
	// 	for(int j=0;s[i][j]!='\0';j++){
	// 		cout<<s[i][j]<<' ';
	// 	}
	// 	cout<<endl;
	// }
	string a= "abc";
	string b=a;
	string c;
	c=a;

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	c += a;
	cout<<c<<endl;N
	if(a<b){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
	string key;
	cin>>key;

	int i;
	for(i=0;i<4;i++){
		if(s[i] == key){
			cout<<"Key Found"<<endl;
			break;
		}
	}
	if( i==4 ){
		cout<<"Key Not Found"<<endl;
	}





	// cin>>s;
	// cin.getline(a,100); // To do for character arrays
	// To take input of strings along with white spaces

	// getline(cin,s); // This is how we take input of string along with white spaces

	// cout<<s<<endl;

	return 0; 
	
}
