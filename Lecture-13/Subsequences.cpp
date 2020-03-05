// Subsequences
#include<iostream> 
using namespace std;

void Subsequences(char *in, char* out,int i,int j){
	// Base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}

	// Recursive case
	// Firstly lets take the ith character
	out[j] = in[i];
	Subsequences(in,out,i+1,j+1);

	// Secondly lets ignore it
	Subsequences(in,out,i+1,j);
}

int main(){
	char in[10];
	cin>>in;

	char out[100];

	Subsequences(in,out,0,0);
	return 0; 
}
