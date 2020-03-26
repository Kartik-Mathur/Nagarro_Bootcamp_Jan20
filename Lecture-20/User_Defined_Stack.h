#include<iostream> 
#include "Node.h"
using namespace std;

template<typename T>
class Stack{
	node<T>* head;
public:
	Stack(){
		head = NULL;
	}

	void push(T data){
		if(head == NULL){
			head=new node<T>(data);
			return;
		}
		node<T>* n = new node<T>(data);
		n->next =head;
		head = n;
	}

	void pop(){
		if(head == NULL){
			return;
		}
		node<T>* temp = head;
		head = head->next;
		delete temp;
	}

	T top(){
		return head->data;
	}

	bool empty(){
		return head == NULL;
	}
};