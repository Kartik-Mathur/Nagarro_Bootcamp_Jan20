// UpperLower
#include <iostream> // Header File
using namespace std; 

int main(){
	// cout<<'A'+'B'<<endl;

	char ch;
	cout<<ch<<endl;
	cin>>ch;

	cout<<ch<<endl;
	int a = ch;
	// cout<<a<<endl;
	if(a>=65 && a<=90){
		cout<<"Upper Case"<<endl;
	}
	else{
		cout<<"Lower Case"<<endl;
	}

	if(ch>='A'&&ch<='Z'){
		cout<<"Upper Case"<<endl;
	}
	else{
		cout<<"Lower Case"<<endl;
	}

	return 0; // inside main it represents exit
}
