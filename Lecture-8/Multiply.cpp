// Multiply
#include<iostream>
using namespace std;

void multiply(int x,int y){

	cout<<"Function says answer is : "<<x*y<<endl;

}

int mul(int a,int b){
	int ans = a*b;
	return ans;
}


int main(){
	int a,b;

	cin>>a>>b;

	multiply(a,b);

	int ans = mul(a,b);
	cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<ans<<endl;

	return 0;
}



