// ReverseStack
#include<iostream> 
#include<stack>
using namespace std;

void pushBottom(stack<int> &s,int topElement){
	// base case
	if(s.empty()){
		s.push(topElement);
		return;
	}

	int top = s.top();
	s.pop();
	pushBottom(s,topElement);
	s.push(top);
}


void ReverseStack(stack<int> &s){
	// Base case
	if(s.empty()){
		return;
	}

	// Recursive case
	int topElement = s.top();
	s.pop();
	ReverseStack(s);
	pushBottom(s,topElement);
}

void print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<' ';
		s.pop();
	}
	cout<<endl;
}

int main(){
	stack<int> s;

	for(int i=0;i<4;i++){
		s.push(4-i);
	}

	print(s);

	ReverseStack(s);

	print(s);

	return 0; 
}

