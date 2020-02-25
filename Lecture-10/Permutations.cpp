// Permutations
// CheckPallindrome
#include<iostream> 
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

bool isPermutation(char *a,char *b){
	
	int freq[26] = {0};

	for(int i=0;a[i]!='\0';i++){
		char c = a[i];
		int indx = c-'a';

		freq[indx]++;
	}

	// for(int i=0;i<26;i++){
	// 	cout<<freq[i]<<' ';
	// }
	// cout<<endl;
	for(int i=0;b[i]!='\0';i++){
		char c = b[i];
		int indx = c-'a';

		freq[indx]--;
	}
	
	for(int i=0;i<26;i++){
		// cout<<freq[i]<<' ';
		if(freq[i]!=0){
			return false;
		}
	}
	// cout<<endl;
	return true;
}



int main(){

	char a[100],b[100];
	cin>>a>>b;

	if(isPermutation(a,b) == true){	
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

	return 0; 
}
