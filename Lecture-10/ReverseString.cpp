// ReverseString

#include<iostream> 
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void Reverse(char *a){
	int i=0;
	int j=length(a)-1;

	while(i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
}



int main(){

	char a[100];
	cin>>a;
	
	Reverse(a);
	cout<<a<<endl;

	return 0; 
}
