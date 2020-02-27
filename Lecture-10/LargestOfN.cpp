// LargestOfN
#include<iostream> 
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void COPY(char* largest,char *a){
	int l = length(a);

	for(int i=0;i<=l;i++){
		largest[i] = a[i];
	}
}

int main(){
	char largest[100];
	int largest_length = 0;

	int n;
	cin>>n;
	cin.get();
	char a[100];
	for(int i=0;i<n;i++){

		cin.getline(a,100);
		if(length(a)>largest_length){
			COPY(largest,a);
			// strcpy(largest,a);
			largest_length = length(a);
		}
	}

	cout<<largest<<endl;
	cout<<largest_length<<endl;

	return 0; 
}
