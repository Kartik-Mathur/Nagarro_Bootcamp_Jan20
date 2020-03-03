// IntegerToString
#include<iostream> 
using namespace std;

char x[][10]={
	"zero","one","two","three","four","five","six","seven","eight","nine"
};

void Print(int n){
	if( n==0 ){
		return;
	}

	Print(n/10);
	cout<<x[n%10]<<endl;

}

int main(){

	int n;
	cin>>n;

	Print(n);


	return 0; 
}
