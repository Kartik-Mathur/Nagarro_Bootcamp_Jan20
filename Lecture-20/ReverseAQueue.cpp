// ReverseAQueue
#include<iostream> 
#include<queue>
using namespace std;

void ReverseAQueue(queue<int> &q){
	if(q.empty()){
		return;
	}

	int element = q.front();
	q.pop();
	ReverseAQueue(q);
	q.push(element);
}

void Print(queue<int> q){

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;	
}

int main(){

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	Print(q);
	ReverseAQueue(q);
	Print(q);

	return 0; 
}
