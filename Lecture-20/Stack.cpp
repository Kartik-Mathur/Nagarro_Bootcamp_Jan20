// Stack
#include<iostream> 
#include <stack>
using namespace std;

int main(){

	stack<char> s;

	// s.push(1);
	// s.push(2);
	// s.push(3);
	// s.push(4);
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	
	while(s.empty()!=true){
		cout<<s.top()<<endl;
		s.pop();
	}

	return 0; 
}
