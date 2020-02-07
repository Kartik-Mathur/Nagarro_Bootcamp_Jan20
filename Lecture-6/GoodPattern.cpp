// GoodPattern
#include <iostream>
using namespace std;

int main(){
		
	int n;
	cin>>n;
	int number = 1;
	for(int row=1;row<=n;row++)	{
		// Print n-row spaces
		for(int spaces =1 ;spaces <= n-row ; spaces++){
			cout<<' ';
		}

		// Print 2*row - 1 numbers
		for(int i = 1;i<=2*row-1;i++){
			cout<<number;
			number++;
		}
		cout<<endl;
	}

	cout<<endl;

	return 0;
}