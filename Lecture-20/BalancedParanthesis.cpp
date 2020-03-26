// BalancedParanthesis
#include<iostream> 
#include <stack>
using namespace std;

bool isBalanced(char* a){

	stack<char> s;

	for(int i=0;a[i]!='\0';i++){
		char ch = a[i];
		switch(ch){
			case '{':
			case '(':
			case '[':
					s.push(ch);
					break;
			case '}':
					if(!s.empty() && s.top() == '{'){
						s.pop();
					}
					else{
						return false;
					}
					break;
			case ')':
					if(!s.empty() && s.top() == '('){
						s.pop();
					}
					else{
						return false;
					}
					break;
			case ']':
					if(!s.empty() && s.top() == '['){
						s.pop();
					}
					else{
						return false;
					}
					break;
		}
	}

	return s.empty() == true?true:false;
}

int main(){

	char a[100]= "{a+(b+c)*d+(e+f)*g}]";

	if(isBalanced(a)){
		cout<<"BalancedParanthesis"<<endl;
	}
	else{
		cout<<"Not A BalancedParanthesis"<<endl;
	}


	return 0; 
}
