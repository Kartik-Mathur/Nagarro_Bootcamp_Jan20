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

	int count_of_number = 2*n-3;

	for(int row = 1; row<=n-1; row++){
		// Print row times spaces
		for(int spaces=1;spaces<=row;spaces++){
			cout<<' ';
		}

		for(int i=1;i<=count_of_number;i++){

		}


		count_of_number = count_of_number - 2;
		cout<<endl;
	}














	cout<<endl;

	return 0;
}