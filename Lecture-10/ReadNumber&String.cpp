// ReadNumber&String
#include<iostream> 
using namespace std;


int main(){

	int n;
	char a[120];

	cin>>n;
	cin.get(); // cin.ignore()
	cin.getline(a,120);

	cout<<n<<endl;
	cout<<a<<endl;

	return 0; 
}
