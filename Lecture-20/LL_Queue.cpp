#include<iostream> 
#include <queue>
using namespace std;

class node{
public:
	int data;	
	node* next;
	node(int d){
		data =d;
		next = NULL;
	}
};

class Queue{
	node* head;
public:
	Queue(){
		head = NULL;
	}
	void push(int d){
		// Insertion at end
		if(head == NULL){
			head = new node(d);
			return;
		}
		node* temp = head;

		while(temp->next){
			temp = temp->next;
		}
		node* n = new node(d);
		temp->next = n;
	}

	void pop(){
		// Removal at front
		if(head == NULL){
			return;
		}
		node* temp = head;
		head = head->next;
		delete temp;

	}
	bool empty(){
		return head == NULL;
	}

	int front(){
		return head->data;
	}

};

int main(){
	Queue q;
	// queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0; 
}
