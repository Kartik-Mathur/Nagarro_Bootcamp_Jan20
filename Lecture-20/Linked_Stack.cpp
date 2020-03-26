// Linked_Stacl
#include<iostream> 
#include "User_Defined_Stack.h"
using namespace std;

int main(){
	Stack<int> s;


	// s.push('A');
	// s.push('B');
	// s.push('C');
	// s.push('D');

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	while(s.empty()!=true){
		cout<<s.top()<<endl;
		s.pop();
	}	

	return 0; 
}
