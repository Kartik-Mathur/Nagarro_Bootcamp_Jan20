// DefaultArguments
#include<iostream> 
using namespace std;

int Sum(int a=0,int b=0,int c=0){
	return a+b+c;
}

int main(){

	cout<<Sum(1,2,3)<<endl; // 6
	cout<<Sum(1,2)<<endl; // 3
	cout<<Sum(1)<<endl; // 1
	cout<<Sum()<<endl; // 0



	return 0; 
}
