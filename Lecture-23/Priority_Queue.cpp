// Priority_Queue
#include <iostream>
#include <queue>
#include<functional>
using namespace std;

int main(){
	
	// priority_queue<int> q; // By default we get MAX heap
	priority_queue<int,vector<int>,greater<int> > q; // Min heap

	q.push(1);
	q.push(4);
	q.push(0);
	q.push(3);
	q.push(2);
	q.push(6);
	while(!q.empty()){
		cout<<q.top()<<endl;
		q.pop();
	}
	// cout<<q.top()<<endl;
	// q.pop();
	// cout<<q.top()<<endl;

	return 0;
}