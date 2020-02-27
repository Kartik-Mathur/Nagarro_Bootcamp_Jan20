// RotateString
#include<iostream> 
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void RotateString(char *a,int k){
	int l = length(a);

	int i = l;
	// cout<<a<<endl;
	while(i>=0){
		a[i+k] = a[i];
		i--;
	}
	// cout<<a<<endl;

	i = 0;
	int j = l;
	for(int m = 1;m<=k;m++){
		a[i] = a[j];
		i++;
		j++;
	}
	// cout<<a<<endl;
	a[l] = '\0';
	// cout<<a<<endl;
}

int main(){

	char a[100];
	int k;

	cin>>a>>k;

	RotateString(a,k);

	cout<<a<<endl;

	return 0; 
}
