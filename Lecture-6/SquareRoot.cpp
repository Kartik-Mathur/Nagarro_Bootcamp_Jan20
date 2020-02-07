// SquareRoot
#include <iostream>
using namespace std;

int main(){
	int no,precision;
	cin>>no>>precision;
	
	int current_precision = 0;

	float ans = 0;
	float inc = 1;

	while(current_precision<=precision){
		while(ans*ans<=no){
			ans = ans + inc;
		}
		ans = ans - inc;

		current_precision = current_precision + 1;
		inc = inc/10;
	}



	cout<<ans<<endl;

	return 0;
}