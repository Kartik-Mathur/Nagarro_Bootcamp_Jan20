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
	Print(head);



	return 0; 
}
