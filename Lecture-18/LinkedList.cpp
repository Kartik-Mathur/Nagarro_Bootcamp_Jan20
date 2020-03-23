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

void InsertAtFront(node* &head,node* &tail,int data){
	if(head == NULL){
		head = tail = new node(data);
	}
	else{
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head,node* &tail,int data){
	if(head == NULL){
		head = tail = new node(data);
	}
	else{
		node*n = new node(data);
		tail->next = n;
		tail = n;
	}
}

void InsertAtMid(node* &head,node* &tail,int pos,int data){
	if(pos == 0){
		InsertAtFront(head,tail,data);
	}
	else if(pos>=lengthLL(head)-1){
		InsertAtEnd(head,tail,data);
	}
	else{
		node* temp = head;
		int count = 1;
		while(count<=pos-1){
			temp = temp->next;
			count++;
		}

		node* n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void Print(node* head){

	while(head){
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}



int main(){

	node* head = NULL;
	node* tail = NULL;

	InsertAtFront(head,tail,5);
	InsertAtFront(head,tail,4);
	InsertAtFront(head,tail,3);
	InsertAtFront(head,tail,2);
	InsertAtFront(head,tail,1);

	Print(head);
	InsertAtEnd(head,tail,6);
	InsertAtEnd(head,tail,7);
	InsertAtEnd(head,tail,8);

	Print(head);
	InsertAtMid(head,tail,100,100);
	Print(head);



	return 0; 
}
