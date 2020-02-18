#include<iostream>
using namespace std;

void Swap(int &x,int &y){
	// int temp = x;
	// x= y;
	// y=temp;
	


	// cout<<"In func "<<a<<" , "<<b<<endl;
	// return; // To return from void
}


int main(){

	int a=10,b=20;

	cout<<"Before swapping "<<a<<" , "<<b<<endl;

	Swap(a,b);

	cout<<"After swapping "<<a<<" , "<<b<<endl;



	return 0; // Exit
}
