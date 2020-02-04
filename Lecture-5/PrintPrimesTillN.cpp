// PrintPrimesTillN

#include <iostream> // Header File
using namespace std; 

int main(){
	int n;
	cin>>n;

	int no,i;

	for(no = 1; no<=n; no = no + 1){

		i = 2;
		while(i<=no-1){
			if(no%i==0){
				break;
			}
			i = i + 1;
		}
		if(i == no){
			cout<<no<<' ';
		}
	}
	cout<<endl;

	return 0; // inside main it represents exit
}
