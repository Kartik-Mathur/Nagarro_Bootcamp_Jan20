// MergeStrings
#include<iostream> 
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void merge(char *a,char *b){

	int i = length(a);
	int j = 0;
	int k = length(b);

	for(int l=0; l<=k ; l++){
		a[i] = b[j];
		i++;
		j++;
	}

}

int main(){
	char a[100],b[100];
	cin>>a>>b;

	merge(a,b);
	cout<<a<<endl;


	return 0; 
}
