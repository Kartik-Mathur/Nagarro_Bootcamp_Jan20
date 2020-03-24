// LinkedList
#include<iostream> 
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head){
	int count = 0;
	while(head){
		count++;
		head = head->next;
	}
	return count;
}

void InsertAtFront(node* &head,int data){
	if(head == NULL){
		head = new node(data);
	}
	else{
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void Print(node* head){

	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

node* SearchLL(node* head,int key){

	while(head){
		if(head->data == key){
			return head;
		}
		head =head->next;
	}
	return NULL;
}

node* mid(node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}

	node* slow = head;
	node* fast = head->next;

	while(fast!=NULL && fast->next!=NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}

node* merge(node* h1,node* h2){
	// Base case
	if(h1 == NULL){
		return h2;
	}
	if(h2 == NULL){
		return h1;
	}

	// Recursive case
	node* newHead;
	if(h1->data<h2->data){
		newHead = h1;
		newHead->next = merge(h1->next,h2);
	}
	else{
		newHead = h2;
		newHead->next = merge(h1,h2->next);
	}
	return newHead;
}

node* mergeSortLL(node* head){
	// Base case
	if(head == NULL || head->next == NULL){
		return head;
	}

	// Recursive case
	//1. Divide
	node* mid1 = mid(head);

	node* a = head;
	node* b = mid1->next;
	mid1->next = NULL;

	//2 . Sort
	a = mergeSortLL(a);
	b = mergeSortLL(b);

	//3. Merge
	node* newHead = merge(a,b);
	return newHead;	
}



int main(){

	node* head = NULL;
	node* head1 = NULL;
	InsertAtFront(head,10);
	InsertAtFront(head,2);
	InsertAtFront(head,0);
	InsertAtFront(head,11);
	InsertAtFront(head,3);
	InsertAtFront(head,1);
	InsertAtFront(head,4);
	InsertAtFront(head,5);
	InsertAtFront(head,7);
	InsertAtFront(head,4);
	Print(head);
	// for(int i =9;i>=1;i-=2){
	// 	InsertAtFront(head,i);
	// }

	// for(int i = 10;i>=1;i-=2){
	// 	InsertAtFront(head1,i);
	// }
	// node* ans = mid(head);
	// cout<<"Middle : "<<ans->data<<endl;

	
	head = mergeSortLL(head);
	Print(head);

	return 0; 	
}
