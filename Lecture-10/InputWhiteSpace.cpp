// TakingWhiteSpace
#include<iostream> 
using namespace std;

void InputArray(char* a,char delimiter='\n'){
	int i = 0;
	char ch;

	ch = cin.get();
	while(ch!=delimiter){
		a[i] = ch;
		i++;

		ch = cin.get();
	}
	a[i] = '\0';
}


int main(){
	char a[100];

	// InputArray(a,'#');
	// cin.getline(name_array,size_of_array/how_many_characters_we_want_to_read,delimiter);
	// By default delimiter is : '\n'
	cin.getline(a,100,'$');

	cout<<a<<endl;

	return 0; 
}
